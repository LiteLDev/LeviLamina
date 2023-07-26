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
    ReflectionContext& operator=(ReflectionContext const&) = delete;
    ReflectionContext(ReflectionContext const&)            = delete;
    ReflectionContext()                                    = delete;

public:
    /**
     * @symbol ?from\@ReflectionContext\@internal\@cereal\@\@SAAEAU123\@AEAUReflectionCtx\@3\@\@Z
     */
    MCAPI static struct cereal::internal::ReflectionContext& from(struct cereal::ReflectionCtx&); // NOLINT
    /**
     * @symbol ?from\@ReflectionContext\@internal\@cereal\@\@SAAEBU123\@AEBUReflectionCtx\@3\@\@Z
     */
    MCAPI static struct cereal::internal::ReflectionContext const& from(struct cereal::ReflectionCtx const&); // NOLINT
};

}; // namespace cereal::internal
