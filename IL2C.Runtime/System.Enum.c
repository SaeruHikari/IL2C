#include "il2c_private.h"

/////////////////////////////////////////////////////////////
// System.Enum

System_String* System_Enum_ToString(System_Enum* this__)
{
    // TODO:
    return System_Object_ToString((System_Object*)this__);
}

int32_t System_Enum_GetHashCode(System_Enum* this__)
{
    // TODO:
    il2c_assert(0);
    return (int32_t)(intptr_t)this__;
}

bool System_Enum_Equals(System_Enum* this__, System_Object* obj)
{
    // TODO:
    il2c_assert(0);
    return false;
}

/////////////////////////////////////////////////
// VTable and runtime type info declarations

__System_Enum_VTABLE_DECL__ __System_Enum_VTABLE__ = {
    /* internalcall */ il2c_isinst__,
    (bool(*)(void*, System_Object*))System_Enum_Equals,
    (void(*)(void*))System_Object_Finalize,
    (int32_t(*)(void*))System_Enum_GetHashCode,
    (System_String* (*)(void*))System_Enum_ToString
};

IL2C_DECLARE_RUNTIME_TYPE(System_Enum, "System.Enum", IL2C_TYPE_REFERENCE, System_ValueType);
