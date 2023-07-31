#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct ReflectionCtx {

public:
    // prevent constructor by default
    ReflectionCtx& operator=(ReflectionCtx const&) = delete;
    ReflectionCtx(ReflectionCtx const&)            = delete;
    ReflectionCtx()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?global\@ReflectionCtx\@cereal\@\@SAAEAU12\@XZ
     */
    MCAPI static struct cereal::ReflectionCtx& global();
    // NOLINTEND
};

}; // namespace cereal
