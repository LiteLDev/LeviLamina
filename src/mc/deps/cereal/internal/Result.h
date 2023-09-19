#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct Result {
public:
    // prevent constructor by default
    Result& operator=(Result const&);
    Result(Result const&);
    Result();
};

}; // namespace cereal::internal
