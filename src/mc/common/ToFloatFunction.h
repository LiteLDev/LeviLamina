#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class ToFloatFunction {

public:
    // prevent constructor by default
    ToFloatFunction& operator=(ToFloatFunction const&) = delete;
    ToFloatFunction(ToFloatFunction const&)            = delete;
    ToFloatFunction()                                  = delete;
};
