#pragma once
#include "ll/api/base/StdInt.h"
// MSVC has customized some functions and classes inside the compiler, but they are not included in IntelliSense. This
// header file is only used for IntelliSense.
#if defined(__INTELLISENSE__) || defined(__clang__)
// NOLINTBEGIN
#pragma pack(push, ehdata, 4)

typedef struct _PMD {
    int mdisp; // member displacement
    int pdisp; // vbtable displacement
    int vdisp; // displacement inside vbtable
} _PMD;

typedef void (*_PMFN)(void);

#pragma warning(disable : 4200)
#pragma pack(push, _TypeDescriptor, 8)
typedef struct _TypeDescriptor {
    const void* pVFTable;
    void*       spare;
    char        name[];
} _TypeDescriptor;
#pragma pack(pop, _TypeDescriptor)
#pragma warning(default : 4200)

typedef const struct _s__CatchableType {
    unsigned int     properties;
    _TypeDescriptor* pType;
    _PMD             thisDisplacement;
    int              sizeOrOffset;
    _PMFN            copyFunction;
} _CatchableType;

#pragma warning(disable : 4200)
typedef const struct _s__CatchableTypeArray {
    int             nCatchableTypes;
    _CatchableType* arrayOfCatchableTypes[];
} _CatchableTypeArray;
#pragma warning(default : 4200)

typedef const struct _s__ThrowInfo {
    unsigned int attributes;
    _PMFN        pmfnUnwind;
    int(__cdecl* pForwardCompat)(...);
    _CatchableTypeArray* pCatchableTypeArray;
} _ThrowInfo;

__declspec(noreturn) extern "C" void __stdcall _CxxThrowException(void* pExceptionObject, _ThrowInfo* pThrowInfo);
extern "C" int __cdecl __CxxExceptionFilter(void*, void*, int, void*);
extern "C" int __cdecl __CxxRegisterExceptionObject(void* exception, void* storage);
extern "C" int __cdecl __CxxDetectRethrow(void* exception);
extern "C" int __cdecl __CxxQueryExceptionSize(void);
extern "C" void __cdecl __CxxUnregisterExceptionObject(void* storage, int rethrow);

#pragma pack(pop, ehdata)

#pragma pack(push, rttidata, 4)

typedef const struct _s__RTTIBaseClassDescriptor {
    _TypeDescriptor* pTypeDescriptor;   // type descriptor of the class
    uint             numContainedBases; // number of nested classes following in the Base Class Array
    _PMD             where;             // pointer-to-member displacement info
    uint             attributes;        // flags, usually 0
} __RTTIBaseClassDescriptor;

#pragma warning(disable : 4200)
typedef const struct _s__RTTIBaseClassArray {
    __RTTIBaseClassDescriptor* arrayOfBaseClassDescriptors[];
} __RTTIBaseClassArray;
#pragma warning(default : 4200)

typedef const struct _s__RTTIClassHierarchyDescriptor {
    uint                  signature;      // always zero?
    uint                  attributes;     // bit 0 set = multiple inheritance, bit 1 set = virtual inheritance
    uint                  numBaseClasses; // number of classes in pBaseClassArray
    __RTTIBaseClassArray* pBaseClassArray;
} __RTTIClassHierarchyDescriptor;

typedef const struct _s__RTTICompleteObjectLocator {
    uint                            signature;        // always zero ?
    uint                            offset;           // offset of this vtable in the complete class
    uint                            cdOffset;         // constructor displacement offset
    _TypeDescriptor*                pTypeDescriptor;  // TypeDescriptor of the complete class
    __RTTIClassHierarchyDescriptor* pClassDescriptor; // describes inheritance hierarchy
} __RTTICompleteObjectLocator;

typedef const class type_info& __RTtypeidReturnType;

extern "C" void* __cdecl __RTDynamicCast(
    void const*            ptr,
    long                   offset,
    _TypeDescriptor const* fromType,
    _TypeDescriptor const* toType,
    int                    isReference
);
extern "C" void* __cdecl __RTtypeid(void*);
extern "C" void* __cdecl __RTCastToVoid(void*);

#pragma pack(pop, rttidata)
// NOLINTEND
#endif

// No one guarantees that the compiler's internal definitions are correct
namespace RealInternal {
#if defined(_WIN64) && !(defined(__INTELLISENSE__) || defined(__clang__))
#pragma pack(push, 4)
struct CatchableType {
    uint properties;
    uint pType;
    _PMD thisDisplacement;
    uint sizeOrOffset;
    uint copyFunction;
};
struct ThrowInfo {
    uint attributes;
    uint pmfnUnwind;
    uint pForwardCompat;
    uint pCatchableTypeArray;
};
#pragma pack(pop)
#else
using CatchableType = ::_CatchableType;
using ThrowInfo     = ::_ThrowInfo;
#endif
} // namespace RealInternal
