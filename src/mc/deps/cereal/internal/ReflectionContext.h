#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal::internal {

struct ReflectionContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_INTERNAL_REFLECTIONCONTEXT
public:
    ReflectionContext& operator=(ReflectionContext const&) = delete;
    ReflectionContext(ReflectionContext const&)            = delete;
    ReflectionContext()                                    = delete;
#endif

public:
    /**
     * @symbol ?from\@ReflectionContext\@internal\@cereal\@\@SAAEAU123\@AEAUReflectionCtx\@3\@\@Z
     */
    MCAPI static struct cereal::internal::ReflectionContext& from(struct cereal::ReflectionCtx&);
    /**
     * @symbol ?from\@ReflectionContext\@internal\@cereal\@\@SAAEBU123\@AEBUReflectionCtx\@3\@\@Z
     */
    MCAPI static struct cereal::internal::ReflectionContext const& from(struct cereal::ReflectionCtx const&);
};

}; // namespace cereal::internal
