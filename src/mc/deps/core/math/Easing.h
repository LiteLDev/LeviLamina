#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

class Easing {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string const& getStringFromEasingType(::EasingType easingType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::function<float(float, float, float)>>& mEasingFuncs();
    // NOLINTEND
};
