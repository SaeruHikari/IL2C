﻿#ifndef __MODULE_il2c_test_target__
#define __MODULE_il2c_test_target__

#include <il2c.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

//////////////////////////////////////////////////////////////////////////////////
// Types:

typedef struct il2c_test_target_ClassTypeTestTarget il2c_test_target_ClassTypeTestTarget;
typedef struct il2c_test_target_ClassTypeTest il2c_test_target_ClassTypeTest;
typedef struct il2c_test_target_BoxingTest il2c_test_target_BoxingTest;
typedef struct il2c_test_target_Arduino il2c_test_target_Arduino;
typedef struct il2c_test_target_Wio il2c_test_target_Wio;
typedef struct il2c_test_target_ValueTypeTestTarget il2c_test_target_ValueTypeTestTarget;
typedef struct il2c_test_target_ValueTypeTest il2c_test_target_ValueTypeTest;
typedef struct il2c_test_target_Hoge2 il2c_test_target_Hoge2;
typedef struct il2c_test_target_Hoge1 il2c_test_target_Hoge1;

////////////////////////////////////////////////////////////
// Class: il2c_test_target.ClassTypeTestTarget

struct il2c_test_target_ClassTypeTestTarget
{
    int32_t Value2;
    il2c_test_target_ClassTypeTestTarget* OR2;
};

extern __RUNTIME_TYPE__ __il2c_test_target_ClassTypeTestTarget_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: il2c_test_target.ClassTypeTest


extern __RUNTIME_TYPE__ __il2c_test_target_ClassTypeTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: il2c_test_target.BoxingTest


extern __RUNTIME_TYPE__ __il2c_test_target_BoxingTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: il2c_test_target.Arduino


extern __RUNTIME_TYPE__ __il2c_test_target_Arduino_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: il2c_test_target.Wio


extern __RUNTIME_TYPE__ __il2c_test_target_Wio_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Struct: il2c_test_target.ValueTypeTestTarget

struct il2c_test_target_ValueTypeTestTarget
{
    int32_t Value2;
};

extern __RUNTIME_TYPE__ __il2c_test_target_ValueTypeTestTarget_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: il2c_test_target.ValueTypeTest


extern __RUNTIME_TYPE__ __il2c_test_target_ValueTypeTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: il2c_test_target.Hoge2


extern __RUNTIME_TYPE__ __il2c_test_target_Hoge2_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: il2c_test_target.Hoge1


extern __RUNTIME_TYPE__ __il2c_test_target_Hoge1_RUNTIME_TYPE__;

//////////////////////////////////////////////////////////////////////////////////
// Public static fields:

extern int32_t il2c_test_target_ClassTypeTestTarget_Value1;
extern il2c_test_target_ClassTypeTestTarget* il2c_test_target_ClassTypeTestTarget_OR1;





extern int32_t il2c_test_target_ValueTypeTestTarget_Value1;




//////////////////////////////////////////////////////////////////////////////////
// Methods:

extern int32_t il2c_test_target_ClassTypeTestTarget_GetValue2(il2c_test_target_ClassTypeTestTarget* __this, int32_t a, int32_t b);
extern void il2c_test_target_ClassTypeTestTarget__ctor(il2c_test_target_ClassTypeTestTarget* __this);

extern int32_t il2c_test_target_ClassTypeTest_Test4(void);
extern int32_t il2c_test_target_ClassTypeTest_Test5(void);
extern void il2c_test_target_ClassTypeTest__ctor(il2c_test_target_ClassTypeTest* __this);

extern void il2c_test_target_BoxingTest_BoxingInt32(int32_t a);
extern void il2c_test_target_BoxingTest__ctor(il2c_test_target_BoxingTest* __this);

extern int32_t il2c_test_target_Arduino_DigitalRead(uint8_t pin);
extern void il2c_test_target_Arduino_DigitalWrite(uint8_t pin, uint8_t val);
extern void il2c_test_target_Arduino_Delay(int32_t milliseconds);
extern void il2c_test_target_Arduino__ctor(il2c_test_target_Arduino* __this);

extern void il2c_test_target_Wio_Init(void);
extern void il2c_test_target_Wio_LedSetRGB(int32_t r, int32_t g, int32_t b);
extern void il2c_test_target_Wio__ctor(il2c_test_target_Wio* __this);

extern int32_t il2c_test_target_ValueTypeTestTarget_GetValue2(il2c_test_target_ValueTypeTestTarget* __this, int32_t a, int32_t b);

extern int32_t il2c_test_target_ValueTypeTest_Test4(void);
extern int32_t il2c_test_target_ValueTypeTest_Test5(void);
extern void il2c_test_target_ValueTypeTest__ctor(il2c_test_target_ValueTypeTest* __this);

extern uint8_t il2c_test_target_Hoge2_Add3(uint8_t a, bool isTwo);
extern uint16_t il2c_test_target_Hoge2_Add4(uint16_t a, bool isTwo);
extern void il2c_test_target_Hoge2__ctor(il2c_test_target_Hoge2* __this);

extern int32_t il2c_test_target_Hoge1_Add1(int32_t a, bool isTwo);
extern int64_t il2c_test_target_Hoge1_Add2(int64_t a, bool isTwo);
extern void il2c_test_target_Hoge1__ctor(il2c_test_target_Hoge1* __this);

#ifdef __cplusplus
}
#endif

#endif