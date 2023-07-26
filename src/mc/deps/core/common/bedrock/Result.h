#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0, typename T1>
class Result {

public:
    // prevent constructor by default
    Result& operator=(Result const&) = delete;
    Result(Result const&)            = delete;
    Result()                         = delete;
};

}; // namespace Bedrock
