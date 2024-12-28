#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal::internal {

struct ReflectionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk3078a3;
    ::ll::UntypedStorage<8, 72> mUnk6a4440;
    // NOLINTEND

public:
    // prevent constructor by default
    ReflectionContext& operator=(ReflectionContext const&);
    ReflectionContext(ReflectionContext const&);
    ReflectionContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ReflectionContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::cereal::internal::ReflectionContext const& from(::cereal::ReflectionCtx const& ctx);

    MCAPI static ::cereal::internal::ReflectionContext& from(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
