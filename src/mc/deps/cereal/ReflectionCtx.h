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
    // symbol: ??1ReflectionCtx@cereal@@QEAA@XZ
    MCAPI ~ReflectionCtx();

    // symbol: ?global@ReflectionCtx@cereal@@SAAEAU12@XZ
    MCAPI static struct cereal::ReflectionCtx& global();

    // NOLINTEND
};

}; // namespace cereal
