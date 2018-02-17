﻿#ifndef __MODULE_Win32_Code__
#define __MODULE_Win32_Code__

#include <il2c.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <wchar.h>

#ifdef __cplusplus
extern "C" {
#endif

//////////////////////////////////////////////////////////////////////////////////
// Types:

typedef struct Win32_Code_BoxingTest Win32_Code_BoxingTest;
typedef struct Win32_Code_ClassTypeTestTarget Win32_Code_ClassTypeTestTarget;
typedef struct Win32_Code_ClassTypeTest Win32_Code_ClassTypeTest;
typedef struct Win32_Code_Hoge1 Win32_Code_Hoge1;
typedef struct Win32_Code_Hoge2 Win32_Code_Hoge2;
typedef struct Win32_Code_InheritTestTargetBase1 Win32_Code_InheritTestTargetBase1;
typedef struct Win32_Code_InheritTestTarget2 Win32_Code_InheritTestTarget2;
typedef struct Win32_Code_InheritTypeTest Win32_Code_InheritTypeTest;
typedef struct Win32_Code_IInterfaceTestTarget Win32_Code_IInterfaceTestTarget;
typedef struct Win32_Code_InterfaceTestTargetClass Win32_Code_InterfaceTestTargetClass;
typedef struct Win32_Code_InterfaceTypeTest Win32_Code_InterfaceTypeTest;
typedef struct Win32_Code_Win32 Win32_Code_Win32;
typedef struct Win32_Code_AbstractNode Win32_Code_AbstractNode;
typedef struct Win32_Code_OperatorNode Win32_Code_OperatorNode;
typedef struct Win32_Code_ReducibleNode Win32_Code_ReducibleNode;
typedef struct Win32_Code_NumericNode Win32_Code_NumericNode;
typedef struct Win32_Code_ExpressionNode Win32_Code_ExpressionNode;
typedef struct Win32_Code_PolishNotation Win32_Code_PolishNotation;
typedef struct Win32_Code_StringTest Win32_Code_StringTest;
typedef struct Win32_Code_UnsafeTest Win32_Code_UnsafeTest;
typedef struct Win32_Code_ValueTypeTestTarget Win32_Code_ValueTypeTestTarget;
typedef struct Win32_Code_ValueTypeTest Win32_Code_ValueTypeTest;

////////////////////////////////////////////////////////////
// Class: Win32.Code.BoxingTest

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_BoxingTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_BoxingTest* this__);
    int32_t (*GetHashCode)(Win32_Code_BoxingTest* this__);
    void (*Finalize)(Win32_Code_BoxingTest* this__);
    bool (*Equals)(Win32_Code_BoxingTest* this__, System_Object* obj);
} __Win32_Code_BoxingTest_VTABLE_DECL__;

// Class layout
struct Win32_Code_BoxingTest
{
    __Win32_Code_BoxingTest_VTABLE_DECL__* vptr0__;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_BoxingTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.ClassTypeTestTarget

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_ClassTypeTestTarget* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_ClassTypeTestTarget* this__);
    int32_t (*GetHashCode)(Win32_Code_ClassTypeTestTarget* this__);
    void (*Finalize)(Win32_Code_ClassTypeTestTarget* this__);
    bool (*Equals)(Win32_Code_ClassTypeTestTarget* this__, System_Object* obj);
} __Win32_Code_ClassTypeTestTarget_VTABLE_DECL__;

// Class layout
struct Win32_Code_ClassTypeTestTarget
{
    __Win32_Code_ClassTypeTestTarget_VTABLE_DECL__* vptr0__;
    int32_t Value2;
    Win32_Code_ClassTypeTestTarget* OR2;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ClassTypeTestTarget_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.ClassTypeTest

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_ClassTypeTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_ClassTypeTest* this__);
    int32_t (*GetHashCode)(Win32_Code_ClassTypeTest* this__);
    void (*Finalize)(Win32_Code_ClassTypeTest* this__);
    bool (*Equals)(Win32_Code_ClassTypeTest* this__, System_Object* obj);
} __Win32_Code_ClassTypeTest_VTABLE_DECL__;

// Class layout
struct Win32_Code_ClassTypeTest
{
    __Win32_Code_ClassTypeTest_VTABLE_DECL__* vptr0__;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ClassTypeTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.Hoge1

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_Hoge1* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_Hoge1* this__);
    int32_t (*GetHashCode)(Win32_Code_Hoge1* this__);
    void (*Finalize)(Win32_Code_Hoge1* this__);
    bool (*Equals)(Win32_Code_Hoge1* this__, System_Object* obj);
} __Win32_Code_Hoge1_VTABLE_DECL__;

// Class layout
struct Win32_Code_Hoge1
{
    __Win32_Code_Hoge1_VTABLE_DECL__* vptr0__;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_Hoge1_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.Hoge2

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_Hoge2* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_Hoge2* this__);
    int32_t (*GetHashCode)(Win32_Code_Hoge2* this__);
    void (*Finalize)(Win32_Code_Hoge2* this__);
    bool (*Equals)(Win32_Code_Hoge2* this__, System_Object* obj);
} __Win32_Code_Hoge2_VTABLE_DECL__;

// Class layout
struct Win32_Code_Hoge2
{
    __Win32_Code_Hoge2_VTABLE_DECL__* vptr0__;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_Hoge2_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.InheritTestTargetBase1

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_InheritTestTargetBase1* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_InheritTestTargetBase1* this__);
    int32_t (*GetHashCode)(Win32_Code_InheritTestTargetBase1* this__);
    void (*Finalize)(Win32_Code_InheritTestTargetBase1* this__);
    bool (*Equals)(Win32_Code_InheritTestTargetBase1* this__, System_Object* obj);
    int32_t (*Calc_1)(Win32_Code_InheritTestTargetBase1* this__, int32_t a, int32_t b);
} __Win32_Code_InheritTestTargetBase1_VTABLE_DECL__;

// Class layout
struct Win32_Code_InheritTestTargetBase1
{
    __Win32_Code_InheritTestTargetBase1_VTABLE_DECL__* vptr0__;
    int32_t Value2;
    Win32_Code_ClassTypeTestTarget* OR2;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_InheritTestTargetBase1_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.InheritTestTarget2

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_InheritTestTarget2* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_InheritTestTarget2* this__);
    int32_t (*GetHashCode)(Win32_Code_InheritTestTarget2* this__);
    void (*Finalize)(Win32_Code_InheritTestTarget2* this__);
    bool (*Equals)(Win32_Code_InheritTestTarget2* this__, System_Object* obj);
    int32_t (*Calc_1)(Win32_Code_InheritTestTarget2* this__, int32_t a, int32_t b);
} __Win32_Code_InheritTestTarget2_VTABLE_DECL__;

// Class layout
struct Win32_Code_InheritTestTarget2
{
    __Win32_Code_InheritTestTarget2_VTABLE_DECL__* vptr0__;
    int32_t Value2;
    Win32_Code_ClassTypeTestTarget* OR2;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_InheritTestTarget2_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.InheritTypeTest

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_InheritTypeTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_InheritTypeTest* this__);
    int32_t (*GetHashCode)(Win32_Code_InheritTypeTest* this__);
    void (*Finalize)(Win32_Code_InheritTypeTest* this__);
    bool (*Equals)(Win32_Code_InheritTypeTest* this__, System_Object* obj);
} __Win32_Code_InheritTypeTest_VTABLE_DECL__;

// Class layout
struct Win32_Code_InheritTypeTest
{
    __Win32_Code_InheritTypeTest_VTABLE_DECL__* vptr0__;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_InheritTypeTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Interface: Win32.Code.IInterfaceTestTarget

// Interface vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_IInterfaceTestTarget* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_IInterfaceTestTarget* this__);
    int32_t (*GetHashCode)(Win32_Code_IInterfaceTestTarget* this__);
    void (*Finalize)(Win32_Code_IInterfaceTestTarget* this__);
    bool (*Equals)(Win32_Code_IInterfaceTestTarget* this__, System_Object* obj);
    int32_t (*Calc)(Win32_Code_IInterfaceTestTarget* this__, int32_t a, int32_t b);
} __Win32_Code_IInterfaceTestTarget_VTABLE_DECL__;

// Interface layout
struct Win32_Code_IInterfaceTestTarget
{
    __Win32_Code_IInterfaceTestTarget_VTABLE_DECL__* vptr_Win32_Code_IInterfaceTestTarget__;
};


// Interface runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_IInterfaceTestTarget_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.InterfaceTestTargetClass

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_InterfaceTestTargetClass* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_InterfaceTestTargetClass* this__);
    int32_t (*GetHashCode)(Win32_Code_InterfaceTestTargetClass* this__);
    void (*Finalize)(Win32_Code_InterfaceTestTargetClass* this__);
    bool (*Equals)(Win32_Code_InterfaceTestTargetClass* this__, System_Object* obj);
    int32_t (*Calc)(Win32_Code_InterfaceTestTargetClass* this__, int32_t a, int32_t b);
} __Win32_Code_InterfaceTestTargetClass_VTABLE_DECL__;

// Class layout
struct Win32_Code_InterfaceTestTargetClass
{
    __Win32_Code_InterfaceTestTargetClass_VTABLE_DECL__* vptr0__;
    __Win32_Code_IInterfaceTestTarget_VTABLE_DECL__* vptr_Win32_Code_IInterfaceTestTarget__;
    int32_t Value2;
    Win32_Code_ClassTypeTestTarget* OR2;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_InterfaceTestTargetClass_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.InterfaceTypeTest

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_InterfaceTypeTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_InterfaceTypeTest* this__);
    int32_t (*GetHashCode)(Win32_Code_InterfaceTypeTest* this__);
    void (*Finalize)(Win32_Code_InterfaceTypeTest* this__);
    bool (*Equals)(Win32_Code_InterfaceTypeTest* this__, System_Object* obj);
} __Win32_Code_InterfaceTypeTest_VTABLE_DECL__;

// Class layout
struct Win32_Code_InterfaceTypeTest
{
    __Win32_Code_InterfaceTypeTest_VTABLE_DECL__* vptr0__;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_InterfaceTypeTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.Win32

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_Win32* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_Win32* this__);
    int32_t (*GetHashCode)(Win32_Code_Win32* this__);
    void (*Finalize)(Win32_Code_Win32* this__);
    bool (*Equals)(Win32_Code_Win32* this__, System_Object* obj);
} __Win32_Code_Win32_VTABLE_DECL__;

// Class layout
struct Win32_Code_Win32
{
    __Win32_Code_Win32_VTABLE_DECL__* vptr0__;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_Win32_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.AbstractNode

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_AbstractNode* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_AbstractNode* this__);
    int32_t (*GetHashCode)(Win32_Code_AbstractNode* this__);
    void (*Finalize)(Win32_Code_AbstractNode* this__);
    bool (*Equals)(Win32_Code_AbstractNode* this__, System_Object* obj);
} __Win32_Code_AbstractNode_VTABLE_DECL__;

// Class layout
struct Win32_Code_AbstractNode
{
    __Win32_Code_AbstractNode_VTABLE_DECL__* vptr0__;
    int32_t NextIndex;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_AbstractNode_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.OperatorNode

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_OperatorNode* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_OperatorNode* this__);
    int32_t (*GetHashCode)(Win32_Code_OperatorNode* this__);
    void (*Finalize)(Win32_Code_OperatorNode* this__);
    bool (*Equals)(Win32_Code_OperatorNode* this__, System_Object* obj);
} __Win32_Code_OperatorNode_VTABLE_DECL__;

// Class layout
struct Win32_Code_OperatorNode
{
    __Win32_Code_OperatorNode_VTABLE_DECL__* vptr0__;
    int32_t NextIndex;
    wchar_t Operator;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_OperatorNode_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.ReducibleNode

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_ReducibleNode* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_ReducibleNode* this__);
    int32_t (*GetHashCode)(Win32_Code_ReducibleNode* this__);
    void (*Finalize)(Win32_Code_ReducibleNode* this__);
    bool (*Equals)(Win32_Code_ReducibleNode* this__, System_Object* obj);
    int32_t (*Reduce)(Win32_Code_ReducibleNode* this__);
} __Win32_Code_ReducibleNode_VTABLE_DECL__;

// Class layout
struct Win32_Code_ReducibleNode
{
    __Win32_Code_ReducibleNode_VTABLE_DECL__* vptr0__;
    int32_t NextIndex;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ReducibleNode_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.NumericNode

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_NumericNode* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_NumericNode* this__);
    int32_t (*GetHashCode)(Win32_Code_NumericNode* this__);
    void (*Finalize)(Win32_Code_NumericNode* this__);
    bool (*Equals)(Win32_Code_NumericNode* this__, System_Object* obj);
    int32_t (*Reduce)(Win32_Code_NumericNode* this__);
} __Win32_Code_NumericNode_VTABLE_DECL__;

// Class layout
struct Win32_Code_NumericNode
{
    __Win32_Code_NumericNode_VTABLE_DECL__* vptr0__;
    int32_t NextIndex;
    int32_t Numeric;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_NumericNode_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.ExpressionNode

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_ExpressionNode* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_ExpressionNode* this__);
    int32_t (*GetHashCode)(Win32_Code_ExpressionNode* this__);
    void (*Finalize)(Win32_Code_ExpressionNode* this__);
    bool (*Equals)(Win32_Code_ExpressionNode* this__, System_Object* obj);
    int32_t (*Reduce)(Win32_Code_ExpressionNode* this__);
} __Win32_Code_ExpressionNode_VTABLE_DECL__;

// Class layout
struct Win32_Code_ExpressionNode
{
    __Win32_Code_ExpressionNode_VTABLE_DECL__* vptr0__;
    int32_t NextIndex;
    Win32_Code_OperatorNode* Operator;
    Win32_Code_ReducibleNode* Left;
    Win32_Code_ReducibleNode* Right;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ExpressionNode_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.PolishNotation

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_PolishNotation* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_PolishNotation* this__);
    int32_t (*GetHashCode)(Win32_Code_PolishNotation* this__);
    void (*Finalize)(Win32_Code_PolishNotation* this__);
    bool (*Equals)(Win32_Code_PolishNotation* this__, System_Object* obj);
} __Win32_Code_PolishNotation_VTABLE_DECL__;

// Class layout
struct Win32_Code_PolishNotation
{
    __Win32_Code_PolishNotation_VTABLE_DECL__* vptr0__;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_PolishNotation_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.StringTest

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_StringTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_StringTest* this__);
    int32_t (*GetHashCode)(Win32_Code_StringTest* this__);
    void (*Finalize)(Win32_Code_StringTest* this__);
    bool (*Equals)(Win32_Code_StringTest* this__, System_Object* obj);
} __Win32_Code_StringTest_VTABLE_DECL__;

// Class layout
struct Win32_Code_StringTest
{
    __Win32_Code_StringTest_VTABLE_DECL__* vptr0__;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_StringTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.UnsafeTest

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_UnsafeTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_UnsafeTest* this__);
    int32_t (*GetHashCode)(Win32_Code_UnsafeTest* this__);
    void (*Finalize)(Win32_Code_UnsafeTest* this__);
    bool (*Equals)(Win32_Code_UnsafeTest* this__, System_Object* obj);
} __Win32_Code_UnsafeTest_VTABLE_DECL__;

// Class layout
struct Win32_Code_UnsafeTest
{
    __Win32_Code_UnsafeTest_VTABLE_DECL__* vptr0__;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_UnsafeTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Struct: Win32.Code.ValueTypeTestTarget

// Struct vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_ValueTypeTestTarget* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_ValueTypeTestTarget this__);
    int32_t (*GetHashCode)(Win32_Code_ValueTypeTestTarget this__);
    void (*Finalize)(Win32_Code_ValueTypeTestTarget this__);
    bool (*Equals)(Win32_Code_ValueTypeTestTarget this__, System_Object* obj);
} __Win32_Code_ValueTypeTestTarget_VTABLE_DECL__;

// Struct layout
struct Win32_Code_ValueTypeTestTarget
{
    __Win32_Code_ValueTypeTestTarget_VTABLE_DECL__* vptr0__;
    int32_t Value2;
    Win32_Code_ClassTypeTestTarget* OR2;
};


// Struct runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ValueTypeTestTarget_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.ValueTypeTest

// Class vtable layout
typedef const struct
{
    /* internalcall */ void* (*IL2C_RuntimeCast)(Win32_Code_ValueTypeTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(Win32_Code_ValueTypeTest* this__);
    int32_t (*GetHashCode)(Win32_Code_ValueTypeTest* this__);
    void (*Finalize)(Win32_Code_ValueTypeTest* this__);
    bool (*Equals)(Win32_Code_ValueTypeTest* this__, System_Object* obj);
} __Win32_Code_ValueTypeTest_VTABLE_DECL__;

// Class layout
struct Win32_Code_ValueTypeTest
{
    __Win32_Code_ValueTypeTest_VTABLE_DECL__* vptr0__;
};


// Class runtime type information
extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ValueTypeTest_RUNTIME_TYPE__;

//////////////////////////////////////////////////////////////////////////////////
// Public static fields:


extern int32_t Win32_Code_ClassTypeTestTarget_Value1;
extern Win32_Code_ClassTypeTestTarget* Win32_Code_ClassTypeTestTarget_OR1;



















extern int32_t Win32_Code_ValueTypeTestTarget_Value1;


//////////////////////////////////////////////////////////////////////////////////
// Methods:

// Win32.Code.BoxingTest
extern /* internalcall */ void __Win32_Code_BoxingTest_IL2C_MarkHandler__(Win32_Code_BoxingTest* this__);
extern /* internalcall */ void* __Win32_Code_BoxingTest_IL2C_RuntimeCast__(Win32_Code_BoxingTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_BoxingTest_BoxingInt32(int32_t a);
extern void Win32_Code_BoxingTest__ctor(Win32_Code_BoxingTest* this__);
#define Win32_Code_BoxingTest_ToString(/* Win32_Code_BoxingTest* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_BoxingTest_GetHashCode(/* Win32_Code_BoxingTest* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_BoxingTest_Finalize(/* Win32_Code_BoxingTest* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_BoxingTest_Equals(/* Win32_Code_BoxingTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.ClassTypeTestTarget
extern /* internalcall */ void __Win32_Code_ClassTypeTestTarget_IL2C_MarkHandler__(Win32_Code_ClassTypeTestTarget* this__);
extern /* internalcall */ void* __Win32_Code_ClassTypeTestTarget_IL2C_RuntimeCast__(Win32_Code_ClassTypeTestTarget* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_ClassTypeTestTarget__ctor(Win32_Code_ClassTypeTestTarget* this__);
extern void Win32_Code_ClassTypeTestTarget__ctor_1(Win32_Code_ClassTypeTestTarget* this__, int32_t value);
extern int32_t Win32_Code_ClassTypeTestTarget_GetValue2(Win32_Code_ClassTypeTestTarget* this__, int32_t a, int32_t b);
extern int32_t Win32_Code_ClassTypeTestTarget_GetValue2_1(Win32_Code_ClassTypeTestTarget* this__, int32_t a, int32_t b, int32_t c);
#define Win32_Code_ClassTypeTestTarget_ToString(/* Win32_Code_ClassTypeTestTarget* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_ClassTypeTestTarget_GetHashCode(/* Win32_Code_ClassTypeTestTarget* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_ClassTypeTestTarget_Finalize(/* Win32_Code_ClassTypeTestTarget* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_ClassTypeTestTarget_Equals(/* Win32_Code_ClassTypeTestTarget* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.ClassTypeTest
extern /* internalcall */ void __Win32_Code_ClassTypeTest_IL2C_MarkHandler__(Win32_Code_ClassTypeTest* this__);
extern /* internalcall */ void* __Win32_Code_ClassTypeTest_IL2C_RuntimeCast__(Win32_Code_ClassTypeTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern int32_t Win32_Code_ClassTypeTest_Test4(void);
extern int32_t Win32_Code_ClassTypeTest_Test5(void);
extern int32_t Win32_Code_ClassTypeTest_Test6(void);
extern int32_t Win32_Code_ClassTypeTest_Test7(void);
extern void Win32_Code_ClassTypeTest__ctor(Win32_Code_ClassTypeTest* this__);
#define Win32_Code_ClassTypeTest_ToString(/* Win32_Code_ClassTypeTest* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_ClassTypeTest_GetHashCode(/* Win32_Code_ClassTypeTest* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_ClassTypeTest_Finalize(/* Win32_Code_ClassTypeTest* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_ClassTypeTest_Equals(/* Win32_Code_ClassTypeTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.Hoge1
extern /* internalcall */ void __Win32_Code_Hoge1_IL2C_MarkHandler__(Win32_Code_Hoge1* this__);
extern /* internalcall */ void* __Win32_Code_Hoge1_IL2C_RuntimeCast__(Win32_Code_Hoge1* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern int32_t Win32_Code_Hoge1_Add1(int32_t a, bool isTwo);
extern int64_t Win32_Code_Hoge1_Add2(int64_t a, bool isTwo);
extern void Win32_Code_Hoge1__ctor(Win32_Code_Hoge1* this__);
#define Win32_Code_Hoge1_ToString(/* Win32_Code_Hoge1* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_Hoge1_GetHashCode(/* Win32_Code_Hoge1* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_Hoge1_Finalize(/* Win32_Code_Hoge1* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_Hoge1_Equals(/* Win32_Code_Hoge1* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.Hoge2
extern /* internalcall */ void __Win32_Code_Hoge2_IL2C_MarkHandler__(Win32_Code_Hoge2* this__);
extern /* internalcall */ void* __Win32_Code_Hoge2_IL2C_RuntimeCast__(Win32_Code_Hoge2* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern uint8_t Win32_Code_Hoge2_Add3(uint8_t a, bool isTwo);
extern uint16_t Win32_Code_Hoge2_Add4(uint16_t a, bool isTwo);
extern void Win32_Code_Hoge2__ctor(Win32_Code_Hoge2* this__);
#define Win32_Code_Hoge2_ToString(/* Win32_Code_Hoge2* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_Hoge2_GetHashCode(/* Win32_Code_Hoge2* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_Hoge2_Finalize(/* Win32_Code_Hoge2* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_Hoge2_Equals(/* Win32_Code_Hoge2* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.InheritTestTargetBase1
extern /* internalcall */ void __Win32_Code_InheritTestTargetBase1_IL2C_MarkHandler__(Win32_Code_InheritTestTargetBase1* this__);
extern /* internalcall */ void* __Win32_Code_InheritTestTargetBase1_IL2C_RuntimeCast__(Win32_Code_InheritTestTargetBase1* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_InheritTestTargetBase1__ctor(Win32_Code_InheritTestTargetBase1* this__);
extern void Win32_Code_InheritTestTargetBase1__ctor_1(Win32_Code_InheritTestTargetBase1* this__, int32_t value);
extern int32_t Win32_Code_InheritTestTargetBase1_Calc(Win32_Code_InheritTestTargetBase1* this__, int32_t a);
extern /* virtual */ int32_t __Win32_Code_InheritTestTargetBase1_Calc_1__(Win32_Code_InheritTestTargetBase1* this__, int32_t a, int32_t b);
#define Win32_Code_InheritTestTargetBase1_ToString(/* Win32_Code_InheritTestTargetBase1* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_InheritTestTargetBase1_GetHashCode(/* Win32_Code_InheritTestTargetBase1* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_InheritTestTargetBase1_Finalize(/* Win32_Code_InheritTestTargetBase1* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_InheritTestTargetBase1_Equals(/* Win32_Code_InheritTestTargetBase1* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))
#define Win32_Code_InheritTestTargetBase1_Calc_1(/* Win32_Code_InheritTestTargetBase1* */ this__, /* int32_t */ a, /* int32_t */ b) \
    ((this__)->vptr0__->Calc_1(this__, a, b))

// Win32.Code.InheritTestTarget2
extern /* internalcall */ void __Win32_Code_InheritTestTarget2_IL2C_MarkHandler__(Win32_Code_InheritTestTarget2* this__);
extern /* internalcall */ void* __Win32_Code_InheritTestTarget2_IL2C_RuntimeCast__(Win32_Code_InheritTestTarget2* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_InheritTestTarget2__ctor(Win32_Code_InheritTestTarget2* this__);
extern void Win32_Code_InheritTestTarget2__ctor_1(Win32_Code_InheritTestTarget2* this__, int32_t value);
extern int32_t Win32_Code_InheritTestTarget2_Calc(Win32_Code_InheritTestTarget2* this__, int32_t a);
extern /* virtual */ int32_t __Win32_Code_InheritTestTarget2_Calc_1__(Win32_Code_InheritTestTarget2* this__, int32_t a, int32_t b);
#define Win32_Code_InheritTestTarget2_ToString(/* Win32_Code_InheritTestTarget2* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_InheritTestTarget2_GetHashCode(/* Win32_Code_InheritTestTarget2* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_InheritTestTarget2_Finalize(/* Win32_Code_InheritTestTarget2* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_InheritTestTarget2_Equals(/* Win32_Code_InheritTestTarget2* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))
#define Win32_Code_InheritTestTarget2_Calc_1(/* Win32_Code_InheritTestTarget2* */ this__, /* int32_t */ a, /* int32_t */ b) \
    ((this__)->vptr0__->Calc_1(this__, a, b))

// Win32.Code.InheritTypeTest
extern /* internalcall */ void __Win32_Code_InheritTypeTest_IL2C_MarkHandler__(Win32_Code_InheritTypeTest* this__);
extern /* internalcall */ void* __Win32_Code_InheritTypeTest_IL2C_RuntimeCast__(Win32_Code_InheritTypeTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern int32_t Win32_Code_InheritTypeTest_Test1(void);
extern int32_t Win32_Code_InheritTypeTest_Test2(void);
extern int32_t Win32_Code_InheritTypeTest_Test3(void);
extern int32_t Win32_Code_InheritTypeTest_Test4(void);
extern int32_t Win32_Code_InheritTypeTest_Test5(void);
extern void Win32_Code_InheritTypeTest__ctor(Win32_Code_InheritTypeTest* this__);
#define Win32_Code_InheritTypeTest_ToString(/* Win32_Code_InheritTypeTest* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_InheritTypeTest_GetHashCode(/* Win32_Code_InheritTypeTest* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_InheritTypeTest_Finalize(/* Win32_Code_InheritTypeTest* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_InheritTypeTest_Equals(/* Win32_Code_InheritTypeTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.IInterfaceTestTarget
extern /* internalcall */ void* __Win32_Code_IInterfaceTestTarget_IL2C_RuntimeCast__(Win32_Code_IInterfaceTestTarget* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern /* virtual */ int32_t Win32_Code_IInterfaceTestTarget_Calc(Win32_Code_IInterfaceTestTarget* this__, int32_t a, int32_t b);
#define Win32_Code_IInterfaceTestTarget_ToString(/* Win32_Code_IInterfaceTestTarget* */ this__) \
    ((this__)->vptr_Win32_Code_IInterfaceTestTarget__->ToString(this__))
#define Win32_Code_IInterfaceTestTarget_GetHashCode(/* Win32_Code_IInterfaceTestTarget* */ this__) \
    ((this__)->vptr_Win32_Code_IInterfaceTestTarget__->GetHashCode(this__))
#define Win32_Code_IInterfaceTestTarget_Finalize(/* Win32_Code_IInterfaceTestTarget* */ this__) \
    ((this__)->vptr_Win32_Code_IInterfaceTestTarget__->Finalize(this__))
#define Win32_Code_IInterfaceTestTarget_Equals(/* Win32_Code_IInterfaceTestTarget* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr_Win32_Code_IInterfaceTestTarget__->Equals(this__, obj))
#define Win32_Code_IInterfaceTestTarget_Calc(/* Win32_Code_IInterfaceTestTarget* */ this__, /* int32_t */ a, /* int32_t */ b) \
    ((this__)->vptr_Win32_Code_IInterfaceTestTarget__->Calc(this__, a, b))

// Win32.Code.InterfaceTestTargetClass
extern /* internalcall */ void __Win32_Code_InterfaceTestTargetClass_IL2C_MarkHandler__(Win32_Code_InterfaceTestTargetClass* this__);
extern /* internalcall */ void* __Win32_Code_InterfaceTestTargetClass_IL2C_RuntimeCast__(Win32_Code_InterfaceTestTargetClass* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_InterfaceTestTargetClass__ctor(Win32_Code_InterfaceTestTargetClass* this__);
extern /* virtual */ int32_t __Win32_Code_InterfaceTestTargetClass_Calc__(Win32_Code_InterfaceTestTargetClass* this__, int32_t a, int32_t b);
#define Win32_Code_InterfaceTestTargetClass_ToString(/* Win32_Code_InterfaceTestTargetClass* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_InterfaceTestTargetClass_GetHashCode(/* Win32_Code_InterfaceTestTargetClass* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_InterfaceTestTargetClass_Finalize(/* Win32_Code_InterfaceTestTargetClass* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_InterfaceTestTargetClass_Equals(/* Win32_Code_InterfaceTestTargetClass* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))
#define Win32_Code_InterfaceTestTargetClass_Calc(/* Win32_Code_InterfaceTestTargetClass* */ this__, /* int32_t */ a, /* int32_t */ b) \
    ((this__)->vptr0__->Calc(this__, a, b))

// Win32.Code.InterfaceTypeTest
extern /* internalcall */ void __Win32_Code_InterfaceTypeTest_IL2C_MarkHandler__(Win32_Code_InterfaceTypeTest* this__);
extern /* internalcall */ void* __Win32_Code_InterfaceTypeTest_IL2C_RuntimeCast__(Win32_Code_InterfaceTypeTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern int32_t Win32_Code_InterfaceTypeTest_Test1(void);
extern int32_t Win32_Code_InterfaceTypeTest_Test2(void);
extern void Win32_Code_InterfaceTypeTest__ctor(Win32_Code_InterfaceTypeTest* this__);
#define Win32_Code_InterfaceTypeTest_ToString(/* Win32_Code_InterfaceTypeTest* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_InterfaceTypeTest_GetHashCode(/* Win32_Code_InterfaceTypeTest* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_InterfaceTypeTest_Finalize(/* Win32_Code_InterfaceTypeTest* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_InterfaceTypeTest_Equals(/* Win32_Code_InterfaceTypeTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.Win32
extern /* internalcall */ void __Win32_Code_Win32_IL2C_MarkHandler__(Win32_Code_Win32* this__);
extern /* internalcall */ void* __Win32_Code_Win32_IL2C_RuntimeCast__(Win32_Code_Win32* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern int32_t Win32_Code_Win32_GetCurrentProcessId(void);
extern int32_t Win32_Code_Win32_GetCurrentThreadId(void);
extern void Win32_Code_Win32_OutputDebugString(System_String* message);
extern void Win32_Code_Win32__ctor(Win32_Code_Win32* this__);
#define Win32_Code_Win32_ToString(/* Win32_Code_Win32* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_Win32_GetHashCode(/* Win32_Code_Win32* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_Win32_Finalize(/* Win32_Code_Win32* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_Win32_Equals(/* Win32_Code_Win32* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.AbstractNode
extern /* internalcall */ void __Win32_Code_AbstractNode_IL2C_MarkHandler__(Win32_Code_AbstractNode* this__);
extern /* internalcall */ void* __Win32_Code_AbstractNode_IL2C_RuntimeCast__(Win32_Code_AbstractNode* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_AbstractNode__ctor(Win32_Code_AbstractNode* this__, int32_t nextIndex);
#define Win32_Code_AbstractNode_ToString(/* Win32_Code_AbstractNode* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_AbstractNode_GetHashCode(/* Win32_Code_AbstractNode* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_AbstractNode_Finalize(/* Win32_Code_AbstractNode* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_AbstractNode_Equals(/* Win32_Code_AbstractNode* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.OperatorNode
extern /* internalcall */ void __Win32_Code_OperatorNode_IL2C_MarkHandler__(Win32_Code_OperatorNode* this__);
extern /* internalcall */ void* __Win32_Code_OperatorNode_IL2C_RuntimeCast__(Win32_Code_OperatorNode* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_OperatorNode__ctor(Win32_Code_OperatorNode* this__, wchar_t oper, int32_t nextIndex);
#define Win32_Code_OperatorNode_ToString(/* Win32_Code_OperatorNode* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_OperatorNode_GetHashCode(/* Win32_Code_OperatorNode* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_OperatorNode_Finalize(/* Win32_Code_OperatorNode* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_OperatorNode_Equals(/* Win32_Code_OperatorNode* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.ReducibleNode
extern /* internalcall */ void __Win32_Code_ReducibleNode_IL2C_MarkHandler__(Win32_Code_ReducibleNode* this__);
extern /* internalcall */ void* __Win32_Code_ReducibleNode_IL2C_RuntimeCast__(Win32_Code_ReducibleNode* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_ReducibleNode__ctor(Win32_Code_ReducibleNode* this__, int32_t nextIndex);
extern /* virtual */ int32_t __Win32_Code_ReducibleNode_Reduce__(Win32_Code_ReducibleNode* this__);
#define Win32_Code_ReducibleNode_ToString(/* Win32_Code_ReducibleNode* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_ReducibleNode_GetHashCode(/* Win32_Code_ReducibleNode* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_ReducibleNode_Finalize(/* Win32_Code_ReducibleNode* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_ReducibleNode_Equals(/* Win32_Code_ReducibleNode* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))
#define Win32_Code_ReducibleNode_Reduce(/* Win32_Code_ReducibleNode* */ this__) \
    ((this__)->vptr0__->Reduce(this__))

// Win32.Code.NumericNode
extern /* internalcall */ void __Win32_Code_NumericNode_IL2C_MarkHandler__(Win32_Code_NumericNode* this__);
extern /* internalcall */ void* __Win32_Code_NumericNode_IL2C_RuntimeCast__(Win32_Code_NumericNode* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_NumericNode__ctor(Win32_Code_NumericNode* this__, int32_t numeric, int32_t nextIndex);
extern /* virtual */ int32_t __Win32_Code_NumericNode_Reduce__(Win32_Code_NumericNode* this__);
#define Win32_Code_NumericNode_ToString(/* Win32_Code_NumericNode* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_NumericNode_GetHashCode(/* Win32_Code_NumericNode* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_NumericNode_Finalize(/* Win32_Code_NumericNode* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_NumericNode_Equals(/* Win32_Code_NumericNode* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))
#define Win32_Code_NumericNode_Reduce(/* Win32_Code_NumericNode* */ this__) \
    ((this__)->vptr0__->Reduce(this__))

// Win32.Code.ExpressionNode
extern /* internalcall */ void __Win32_Code_ExpressionNode_IL2C_MarkHandler__(Win32_Code_ExpressionNode* this__);
extern /* internalcall */ void* __Win32_Code_ExpressionNode_IL2C_RuntimeCast__(Win32_Code_ExpressionNode* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_ExpressionNode__ctor(Win32_Code_ExpressionNode* this__, Win32_Code_OperatorNode* oper, Win32_Code_ReducibleNode* left, Win32_Code_ReducibleNode* right, int32_t nextIndex);
extern /* virtual */ int32_t __Win32_Code_ExpressionNode_Reduce__(Win32_Code_ExpressionNode* this__);
#define Win32_Code_ExpressionNode_ToString(/* Win32_Code_ExpressionNode* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_ExpressionNode_GetHashCode(/* Win32_Code_ExpressionNode* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_ExpressionNode_Finalize(/* Win32_Code_ExpressionNode* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_ExpressionNode_Equals(/* Win32_Code_ExpressionNode* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))
#define Win32_Code_ExpressionNode_Reduce(/* Win32_Code_ExpressionNode* */ this__) \
    ((this__)->vptr0__->Reduce(this__))

// Win32.Code.PolishNotation
extern /* internalcall */ void __Win32_Code_PolishNotation_IL2C_MarkHandler__(Win32_Code_PolishNotation* this__);
extern /* internalcall */ void* __Win32_Code_PolishNotation_IL2C_RuntimeCast__(Win32_Code_PolishNotation* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern int32_t Win32_Code_PolishNotation_SkipWhiteSpace(System_String* line, int32_t startIndex);
extern Win32_Code_OperatorNode* Win32_Code_PolishNotation_ParseOperator(System_String* line, int32_t startIndex);
extern Win32_Code_NumericNode* Win32_Code_PolishNotation_ParseNumeric(System_String* line, int32_t startIndex);
extern Win32_Code_ExpressionNode* Win32_Code_PolishNotation_ParseExpression(System_String* line, int32_t startIndex);
extern void Win32_Code_PolishNotation_Main(void);
extern void Win32_Code_PolishNotation__ctor(Win32_Code_PolishNotation* this__);
#define Win32_Code_PolishNotation_ToString(/* Win32_Code_PolishNotation* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_PolishNotation_GetHashCode(/* Win32_Code_PolishNotation* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_PolishNotation_Finalize(/* Win32_Code_PolishNotation* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_PolishNotation_Equals(/* Win32_Code_PolishNotation* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.StringTest
extern /* internalcall */ void __Win32_Code_StringTest_IL2C_MarkHandler__(Win32_Code_StringTest* this__);
extern /* internalcall */ void* __Win32_Code_StringTest_IL2C_RuntimeCast__(Win32_Code_StringTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_StringTest_LiteralString(void);
extern System_String* Win32_Code_StringTest_InOutString(System_String* a);
extern System_String* Win32_Code_StringTest_LiteralCombinedString(void);
extern System_String* Win32_Code_StringTest_LiteralSubstring(void);
extern wchar_t Win32_Code_StringTest_GetChar(void);
extern wchar_t Win32_Code_StringTest_GetCharByIndex(System_String* str, int32_t index);
extern System_String* Win32_Code_StringTest_GetString(void);
extern void Win32_Code_StringTest__ctor(Win32_Code_StringTest* this__);
#define Win32_Code_StringTest_ToString(/* Win32_Code_StringTest* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_StringTest_GetHashCode(/* Win32_Code_StringTest* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_StringTest_Finalize(/* Win32_Code_StringTest* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_StringTest_Equals(/* Win32_Code_StringTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.UnsafeTest
extern /* internalcall */ void __Win32_Code_UnsafeTest_IL2C_MarkHandler__(Win32_Code_UnsafeTest* this__);
extern /* internalcall */ void* __Win32_Code_UnsafeTest_IL2C_RuntimeCast__(Win32_Code_UnsafeTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern void Win32_Code_UnsafeTest__ctor(Win32_Code_UnsafeTest* this__);
#define Win32_Code_UnsafeTest_ToString(/* Win32_Code_UnsafeTest* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_UnsafeTest_GetHashCode(/* Win32_Code_UnsafeTest* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_UnsafeTest_Finalize(/* Win32_Code_UnsafeTest* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_UnsafeTest_Equals(/* Win32_Code_UnsafeTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.ValueTypeTestTarget
extern /* internalcall */ void __Win32_Code_ValueTypeTestTarget_IL2C_MarkHandler__(Win32_Code_ValueTypeTestTarget* this__);
extern /* internalcall */ void* __Win32_Code_ValueTypeTestTarget_IL2C_RuntimeCast__(Win32_Code_ValueTypeTestTarget* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern int32_t Win32_Code_ValueTypeTestTarget_GetValue2(Win32_Code_ValueTypeTestTarget* this__, int32_t a, int32_t b);
#define Win32_Code_ValueTypeTestTarget_ToString(/* Win32_Code_ValueTypeTestTarget */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_ValueTypeTestTarget_GetHashCode(/* Win32_Code_ValueTypeTestTarget */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_ValueTypeTestTarget_Finalize(/* Win32_Code_ValueTypeTestTarget */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_ValueTypeTestTarget_Equals(/* Win32_Code_ValueTypeTestTarget */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

// Win32.Code.ValueTypeTest
extern /* internalcall */ void __Win32_Code_ValueTypeTest_IL2C_MarkHandler__(Win32_Code_ValueTypeTest* this__);
extern /* internalcall */ void* __Win32_Code_ValueTypeTest_IL2C_RuntimeCast__(Win32_Code_ValueTypeTest* this__, IL2C_RUNTIME_TYPE_DECL* type);
extern int32_t Win32_Code_ValueTypeTest_Test4(void);
extern int32_t Win32_Code_ValueTypeTest_Test5(void);
extern void Win32_Code_ValueTypeTest__ctor(Win32_Code_ValueTypeTest* this__);
#define Win32_Code_ValueTypeTest_ToString(/* Win32_Code_ValueTypeTest* */ this__) \
    ((this__)->vptr0__->ToString(this__))
#define Win32_Code_ValueTypeTest_GetHashCode(/* Win32_Code_ValueTypeTest* */ this__) \
    ((this__)->vptr0__->GetHashCode(this__))
#define Win32_Code_ValueTypeTest_Finalize(/* Win32_Code_ValueTypeTest* */ this__) \
    ((this__)->vptr0__->Finalize(this__))
#define Win32_Code_ValueTypeTest_Equals(/* Win32_Code_ValueTypeTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr0__->Equals(this__, obj))

#ifdef __cplusplus
}
#endif

#endif