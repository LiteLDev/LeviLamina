#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct ReflectionCtx {
public:
    // prevent constructor by default
    ReflectionCtx& operator=(ReflectionCtx const&);
    ReflectionCtx(ReflectionCtx const&);
    ReflectionCtx();

public:
    // NOLINTBEGIN
    MCAPI ~ReflectionCtx();

    MCAPI static struct cereal::ReflectionCtx& global();

    // NOLINTEND
};

}; // namespace cereal
