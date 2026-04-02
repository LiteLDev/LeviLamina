#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

struct FogVolumetricCoefficientSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mScattering;
    ::ll::TypedStorage<4, 16, ::mce::Color> mAbsorption;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricCoefficientSetting const& ZERO_SETTING();
    // NOLINTEND
};
