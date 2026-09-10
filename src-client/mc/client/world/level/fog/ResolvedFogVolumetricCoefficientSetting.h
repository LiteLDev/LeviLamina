#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/ColorNormRGB.h"

struct ResolvedFogVolumetricCoefficientSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::SharedTypes::ColorNormRGB> mScattering;
    ::ll::TypedStorage<4, 16, ::SharedTypes::ColorNormRGB> mAbsorption;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ResolvedFogVolumetricCoefficientSetting const& ZERO_SETTING();
    // NOLINTEND
};
