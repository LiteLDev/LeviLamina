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

public:
    // prevent constructor by default
    InheritedReference& operator=(InheritedReference const&);
    InheritedReference();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InheritedReference(::CerealHelpers::InheritedReference const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CerealHelpers::InheritedReference const&);
    // NOLINTEND
};

} // namespace CerealHelpers
