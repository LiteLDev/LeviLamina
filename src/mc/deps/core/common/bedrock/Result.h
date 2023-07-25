#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0, typename T1>
class Result {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_RESULT
public:
    Result& operator=(Result const&) = delete;
    Result(Result const&)            = delete;
    Result()                         = delete;
#endif

public:
};

}; // namespace Bedrock
