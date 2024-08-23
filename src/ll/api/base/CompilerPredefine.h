#pragma once

#include <optional>
#include <type_traits>

#include "ll/api/base/StdInt.h"
#include "ll/api/reflection/TypeName.h"

#ifdef _MSC_VER

#include "intrin.h"

#ifndef LL_HAS_CXX23
#if _HAS_CXX23
#define LL_HAS_CXX23 1
#else
#define LL_HAS_CXX23 0
#endif
#endif

#ifndef LL_SHARED_EXPORT
#define LL_SHARED_EXPORT __declspec(dllexport)
#endif
#ifndef LL_SHARED_IMPORT
#define LL_SHARED_IMPORT __declspec(dllimport)
#endif

#ifndef LL_EBO
#define LL_EBO __declspec(empty_bases)
#endif

#ifndef LL_FORCEINLINE
#define LL_FORCEINLINE __forceinline
#endif

#ifndef LL_CONSTEXPR23
#define LL_CONSTEXPR23 _CONSTEXPR23
#endif

#ifndef LL_UNREACHABLE
#define LL_UNREACHABLE _STL_UNREACHABLE
#endif

#ifndef LL_RETURN_ADDRESS
#define LL_RETURN_ADDRESS _ReturnAddress()
#endif

// MSVC has customized some functions and classes inside the compiler, but they are not included in IntelliSense. This
// header file is only used for IntelliSense.
#if defined(__INTELLISENSE__) || defined(__clang__) || defined(__clangd__)
// NOLINTBEGIN
#pragma pack(push, ehdata, 4)

typedef struct _PMD {
    int mdisp; // Offset of intended data within base
    int pdisp; // Displacement to virtual base pointer
    int vdisp; // Index within vbTable to offset of base
} _PMD;

typedef void (*_PMFN)(void);

#pragma warning(disable : 4200)
#pragma pack(push, _TypeDescriptor, 8)
typedef struct _TypeDescriptor {
    void const* pVFTable; // Field overloaded by RTTI
    void*       spare;    // reserved, possible for RTTI
    char        name[];   // The decorated name of the type; 0 terminated.
} _TypeDescriptor;
#pragma pack(pop, _TypeDescriptor)
#pragma warning(default : 4200)

typedef const struct _s__CatchableType {
    unsigned int     properties;       // Catchable Type properties (Bit field)
    _TypeDescriptor* pType;            // Image relative offset of TypeDescriptor
    _PMD             thisDisplacement; // Pointer to instance of catch type within thrown object.
    int   sizeOrOffset; // Size of simple-type object or offset into buffer of 'this' pointer for catch object
    _PMFN copyFunction; // Copy constructor or CC-closure
} _CatchableType;

#pragma warning(disable : 4200)
typedef const struct _s__CatchableTypeArray {
    int             nCatchableTypes;
    _CatchableType* arrayOfCatchableTypes[]; // Image relative offset of Catchable Types
} _CatchableTypeArray;
#pragma warning(default : 4200)

typedef const struct _s__ThrowInfo {
    unsigned int attributes;                  // Throw Info attributes (Bit field)
    _PMFN        pmfnUnwind;                  // Destructor to call when exception has been handled or aborted
    int(__cdecl* pForwardCompat)(...);        // Image relative offset of Forward compatibility frame handler
    _CatchableTypeArray* pCatchableTypeArray; // Image relative offset of CatchableTypeArray
} _ThrowInfo;

//
// Here's how to throw:
// _ThrowInfo is the name of the type that is 'pre-injected' into the
// since this prototype is known to the FE along with the pre-injected
// types, it has to match exactly.
//
__declspec(noreturn) extern "C" void __stdcall _CxxThrowException(void* pExceptionObject, _ThrowInfo* pThrowInfo);
extern "C" int __cdecl __CxxExceptionFilter(void*, void*, int, void*);

// Returns true if the object is really a C++ exception
// If it is, stores the previous exception in *storage, and saves the current one
// This is needed to keep track of the current exception object (used for rethrow & destruction)
extern "C" int __cdecl __CxxRegisterExceptionObject(void* exception, void* storage);

// Returns true if exception is a C++ rethrown exception
// This is needed, so Unregister can know whether or not to destroy the object
extern "C" int __cdecl __CxxDetectRethrow(void* exception);

// Returns the byte count of stack space required to store the exception info
extern "C" int __cdecl __CxxQueryExceptionSize(void);

// Pops the current exception, restoring the previous one from *storage
// This detects whether or not the exception object needs to be destroyed
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
namespace ll::internal {
#if !(defined(__INTELLISENSE__) || defined(__clangd__))
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

extern "C" struct _IMAGE_DOS_HEADER __ImageBase; // NOLINT(bugprone-reserved-identifier)

[[nodiscard]] LL_FORCEINLINE void* getCurrentModuleHandle() noexcept { return &__ImageBase; }

template <class T, T f>
consteval bool virtualDetector() noexcept {
    return reflection::getRawName<f>().find("::`vcall'{") != std::string_view::npos;
}

using std_optional_construct_from_invoke_tag = std::_Construct_from_invoke_result_tag;

using FileHandleT = void*;

} // namespace ll::internal

#else

#ifndef LL_HAS_CXX23
#if _LIBCPP_STD_VER >= 23
#define LL_HAS_CXX23 1
#else
#define LL_HAS_CXX23 0
#endif
#endif

#ifndef LL_SHARED_EXPORT
#define LL_SHARED_EXPORT __attribute__((visibility("default")))
#endif

#ifndef LL_SHARED_IMPORT
#define LL_SHARED_IMPORT
#endif

#ifndef LL_EBO
#define LL_EBO
#endif

#ifndef LL_FORCEINLINE
#define LL_FORCEINLINE inline __attribute__((always_inline))
#endif

#ifndef LL_CONSTEXPR23
#if defined(__cpp_constexpr) && __cpp_constexpr >= 202211L
#define LL_CONSTEXPR23 constexpr
#else
#define LL_CONSTEXPR23 inline
#endif
#endif

#ifndef LL_UNREACHABLE
#define LL_UNREACHABLE __builtin_unreachable()
#endif

#ifndef LL_RETURN_ADDRESS
#define LL_RETURN_ADDRESS __builtin_return_address(0)
#endif

namespace ll::internal {

[[nodiscard]] LL_FORCEINLINE void* getCurrentModuleHandle() noexcept; // Implemented in SystemUtils_linux.cpp

using std_optional_construct_from_invoke_tag = std::__optional_construct_from_invoke_tag;

using FileHandleT = int;

template <class T, T v1, T v2, class = std::integral_constant<bool, true>>
struct CanCompare : std::false_type {};

template <class T, T v1, T v2>
struct CanCompare<T, v1, v2, std::integral_constant<bool, v1 == v2>> : std::true_type {};

template <class T, T f>
consteval bool virtualDetector() noexcept {
    return !CanCompare<T, f, f>::value;
}

} // namespace ll::internal

#endif
