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
    MCAPI static struct cereal::internal::ReflectionContext& from(struct cereal::ReflectionCtx&);

    MCAPI static struct cereal::internal::ReflectionContext const& from(struct cereal::ReflectionCtx const&);

    // NOLINTEND
};

}; // namespace cereal::internal
