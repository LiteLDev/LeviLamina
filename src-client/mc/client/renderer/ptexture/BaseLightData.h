#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/level/dimension/DimensionType.h"

class BaseLightData {
public:
    // BaseLightData inner types declare
    // clang-format off
    struct DarknessLevels;
    // clang-format on

    // BaseLightData inner types define
    struct DarknessLevels {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> gamma;
        ::ll::TypedStorage<4, 4, float> scale;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>   mSunriseColor;
    ::ll::TypedStorage<4, 4, float>           mGamma;
    ::ll::TypedStorage<4, 4, float>           mSkyDarken;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    ::ll::TypedStorage<4, 4, float>           mDarkenWorldAmount;
    ::ll::TypedStorage<4, 4, float>           mPreviousDarkenWorldAmount;
    ::ll::TypedStorage<1, 1, bool>            mNightvisionActive;
    ::ll::TypedStorage<4, 4, float>           mNightvisionScale;
    ::ll::TypedStorage<1, 1, bool>            mUnderwaterVision;
    ::ll::TypedStorage<4, 4, float>           mUnderwaterScale;
    ::ll::TypedStorage<4, 4, int>             mSkyFlashTime;
    ::ll::TypedStorage<4, 4, float>           mDarknessFactor;
    ::ll::TypedStorage<4, 4, float>           mDarknessFactorPreviousFrame;
    ::ll::TypedStorage<4, 4, float>           mTheEndLightSourceIntensity;
    // NOLINTEND
};
