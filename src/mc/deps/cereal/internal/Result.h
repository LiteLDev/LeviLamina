#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct Result {

public:
    // prevent constructor by default
    Result& operator=(Result const&) = delete;
    Result(Result const&)            = delete;
    Result()                         = delete;
};

}; // namespace cereal::internal
