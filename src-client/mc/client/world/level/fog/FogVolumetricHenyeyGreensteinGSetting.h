#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogVolumetricHenyeyGreensteinGSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHenyeyGreensteinG;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricHenyeyGreensteinGSetting const& ZERO_SETTING();
    // NOLINTEND
};
