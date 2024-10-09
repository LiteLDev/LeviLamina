#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class Result {
public:
    // prevent constructor by default
    Result& operator=(Result const&);
    Result(Result const&);
    Result();
};
