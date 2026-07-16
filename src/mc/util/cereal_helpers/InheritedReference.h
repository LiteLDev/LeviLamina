#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CerealHelpers {

struct InheritedReference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6c4299;
    ::ll::UntypedStorage<8, 72> mUnk50693a;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    InheritedReference& operator=(InheritedReference const&);
    InheritedReference(InheritedReference const&);
    InheritedReference();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    InheritedReference& operator=(InheritedReference const&);
    InheritedReference();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI InheritedReference(::CerealHelpers::InheritedReference const&);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::CerealHelpers::InheritedReference const&);
#endif
    // NOLINTEND
};

} // namespace CerealHelpers
