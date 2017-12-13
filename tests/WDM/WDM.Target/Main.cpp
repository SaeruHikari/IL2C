#include <wdm.h>
#include "Generated/WDM.Code.h"

#pragma warning(disable: 4065)

typedef struct WDM_Code_DeviceExtension
{
    // DIRTY HACK: __EXECUTION_FRAME__
    __EXECUTION_FRAME__* pNext;
    uint8_t targetCount;
    WDM_Code_HelloDriver** ppHelloDriver;

    DEVICE_OBJECT* pLowerDeviceObject;
    WDM_Code_HelloDriver* pHelloDriver;
} WDM_Code_DeviceExtension;

static NTSTATUS WDM_Code_Dispatch(IRP* pIrp, IO_STACK_LOCATION* pIoStackLocation)
{
    auto pDeviceObject = pIoStackLocation->DeviceObject;
    auto pDeviceExtension =
        static_cast<WDM_Code_DeviceExtension*>(pDeviceObject->DeviceExtension);

    auto pHelloDriver =
        pDeviceExtension->pHelloDriver;

    switch (pIoStackLocation->MajorFunction)
    {
//    case IRP_MJ_READ:
//        break;

    default:
        IoSkipCurrentIrpStackLocation(pIrp);
        return IoCallDriver(pDeviceExtension->pLowerDeviceObject, pIrp);
    }
}

/////////////////////////////////////////////////////////////

#pragma code_seg("PAGE")

static NTSTATUS WDM_Code_AddDevice(
    DRIVER_OBJECT* pDriverObject,
    DEVICE_OBJECT* pPhysicalDeviceObject)
{
    PAGED_CODE();

    DEVICE_OBJECT *pDeviceObject = nullptr;
    auto status = IoCreateDevice(
        pDriverObject,
        sizeof(WDM_Code_DeviceExtension),
        nullptr,
        pPhysicalDeviceObject->DeviceType,
        pPhysicalDeviceObject->Characteristics,
        FALSE,
        &pDeviceObject);
    if (!NT_SUCCESS(status))
    {
        return status;
    }

    auto pDeviceExtension =
        static_cast<WDM_Code_DeviceExtension*>(pDeviceObject->DeviceExtension);
    pDeviceExtension->pHelloDriver = nullptr;

    //////////////////////////////////////////
    // DIRTY HACK:
    //   Force manually built global execution frame.
    //   Because suppress collection by GC.
    //   This link totally can't unlink, so HelloDriver leaks periodic by closing device...

    pDeviceExtension->targetCount = 1;
    pDeviceExtension->ppHelloDriver =
        &pDeviceExtension->pHelloDriver;
    __gc_link_execution_frame__(pDeviceExtension);

    //////////////////////////////////////////

    pDeviceExtension->pLowerDeviceObject =
        IoAttachDeviceToDeviceStack(pDeviceObject, pPhysicalDeviceObject);

    __new__(&pDeviceExtension->pHelloDriver, WDM_Code_HelloDriver)
        (pDeviceExtension->pHelloDriver);

    pDeviceObject->Flags =
        pDeviceExtension->pLowerDeviceObject->Flags & ~DO_DEVICE_INITIALIZING;

    return STATUS_SUCCESS;
}

static void WDM_Code_Unload(DRIVER_OBJECT* pDriverObject)
{
    PAGED_CODE();

    __gc_shutdown__();
}

extern "C" NTSTATUS DriverEntry(
    DRIVER_OBJECT* pDriverObject,
    UNICODE_STRING* pRegistryPath)
{
    PAGED_CODE();

    DbgPrint("WDM_Code_DriverEntry(): %wZ", pRegistryPath);

    __gc_initialize__();

    pDriverObject->DriverExtension->AddDevice = WDM_Code_AddDevice;
    pDriverObject->DriverUnload = WDM_Code_Unload;

    for (auto index = 0; index <= IRP_MJ_MAXIMUM_FUNCTION; index++)
    {
        pDriverObject->MajorFunction[index] =
            reinterpret_cast<PDRIVER_DISPATCH>(WDM_Code_Dispatch);
    }

    return STATUS_SUCCESS;
}