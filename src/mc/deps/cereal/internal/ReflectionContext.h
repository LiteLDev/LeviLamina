#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal::internal {

struct ReflectionContext {
public:
    // prevent constructor by default
    ReflectionContext& operator=(ReflectionContext const&);
    ReflectionContext(ReflectionContext const&);
    ReflectionContext();

public:
    // NOLINTBEGIN
    // symbol: ?from@ReflectionContext@internal@cereal@@SAAEAU123@AEAUReflectionCtx@3@@Z
    MCAPI static struct cereal::internal::ReflectionContext& from(struct cereal::ReflectionCtx&);

    // symbol: ?from@ReflectionContext@internal@cereal@@SAAEBU123@AEBUReflectionCtx@3@@Z
    MCAPI static struct cereal::internal::ReflectionContext const& from(struct cereal::ReflectionCtx const&);

    // NOLINTEND
};

}; // namespace cereal::internal
