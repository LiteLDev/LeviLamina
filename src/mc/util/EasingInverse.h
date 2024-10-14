#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EasingInverse {
public:
    // prevent constructor by default
    EasingInverse& operator=(EasingInverse const&);
    EasingInverse(EasingInverse const&);
    EasingInverse();

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::vector<std::function<float(float, float, float)>>& mEasingFuncs();

    // NOLINTEND
};
