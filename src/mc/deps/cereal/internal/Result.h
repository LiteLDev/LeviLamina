#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct Result {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_INTERNAL_RESULT
public:
    Result& operator=(Result const&) = delete;
    Result(Result const&)            = delete;
    Result()                         = delete;
#endif

public:
};

}; // namespace cereal::internal
