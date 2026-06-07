#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogVolumetricDensitySetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMaxDensity;
    ::ll::TypedStorage<4, 4, float> mMaxDensityHeight;
    ::ll::TypedStorage<4, 4, float> mZeroDensityHeight;
    ::ll::TypedStorage<1, 1, bool>  mUniform;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FogVolumetricDensitySetting();

    MCAPI FogVolumetricDensitySetting(float maxDensity, float maxDensityHeight, float zeroDensityHeight);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricDensitySetting
    lerp(::FogVolumetricDensitySetting const& src, ::FogVolumetricDensitySetting const& dst, float alpha);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricDensitySetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(float maxDensity, float maxDensityHeight, float zeroDensityHeight);
    // NOLINTEND
};
