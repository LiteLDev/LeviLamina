#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct ReflectionCtx {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_REFLECTIONCTX
public:
    ReflectionCtx& operator=(ReflectionCtx const&) = delete;
    ReflectionCtx(ReflectionCtx const&)            = delete;
    ReflectionCtx()                                = delete;
#endif

public:
    /**
     * @symbol ?global\@ReflectionCtx\@cereal\@\@SAAEAU12\@XZ
     */
    MCAPI static struct cereal::ReflectionCtx& global();
};

}; // namespace cereal
