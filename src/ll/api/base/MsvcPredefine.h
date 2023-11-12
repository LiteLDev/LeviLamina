#pragma once
// MSVC has customized some functions and classes inside the compiler, but they are not included in IntelliSense. This
// header file is only used for IntelliSense.
#if defined(__INTELLISENSE__) || defined(__clang__)
// NOLINTBEGIN
#pragma pack(push, ehdata, 4)

typedef struct _PMD {
    int mdisp;
    int pdisp;
    int vdisp;
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
    _TypeDescriptor* pTypeDescriptor;
    uint32_t         numContainedBases;
    _PMD             where;
    uint32_t         attributes;
} __RTTIBaseClassDescriptor;

#pragma warning(disable : 4200)
typedef const struct _s__RTTIBaseClassArray {
    __RTTIBaseClassDescriptor* arrayOfBaseClassDescriptors[];
} __RTTIBaseClassArray;
#pragma warning(default : 4200)

typedef const struct _s__RTTIClassHierarchyDescriptor {
    uint32_t              signature;
    uint32_t              attributes;
    uint32_t              numBaseClasses;
    __RTTIBaseClassArray* pBaseClassArray;
} __RTTIClassHierarchyDescriptor;

typedef const struct _s__RTTICompleteObjectLocator {
    uint32_t                        signature;
    uint32_t                        offset;
    uint32_t                        cdOffset;
    _TypeDescriptor*                pTypeDescriptor;
    __RTTIClassHierarchyDescriptor* pClassDescriptor;
} __RTTICompleteObjectLocator;

typedef const class type_info& __RTtypeidReturnType;

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
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
    uint32_t properties;
    uint32_t pType;
    _PMD     thisDisplacement;
    uint32_t sizeOrOffset;
    uint32_t copyFunction;
};
struct ThrowInfo {
    uint32_t attributes;
    uint32_t pmfnUnwind;
    uint32_t pForwardCompat;
    uint32_t pCatchableTypeArray;
};
#pragma pack(pop)
#else
using CatchableType = ::_CatchableType;
using ThrowInfo     = ::_ThrowInfo;
#endif
} // namespace RealInternal
