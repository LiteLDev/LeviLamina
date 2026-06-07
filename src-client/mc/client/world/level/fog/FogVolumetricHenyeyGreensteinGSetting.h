#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogVolumetricHenyeyGreensteinGSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHenyeyGreensteinG;
    // NOLINTEND

public:
    // prevent constructor by default
    FogVolumetricHenyeyGreensteinGSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FogVolumetricHenyeyGreensteinGSetting(float henyeyGreensteinG);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricHenyeyGreensteinGSetting lerp(
        ::FogVolumetricHenyeyGreensteinGSetting const& src,
        ::FogVolumetricHenyeyGreensteinGSetting const& dst,
        float                                          alpha
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricHenyeyGreensteinGSetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(float henyeyGreensteinG);
    // NOLINTEND
};
