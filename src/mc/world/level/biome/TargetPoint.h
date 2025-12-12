#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/climate_utils/TargetSpace.h"

struct TargetPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64 const>                        mTemperature;
    ::ll::TypedStorage<8, 8, int64 const>                        mHumidity;
    ::ll::TypedStorage<8, 8, int64 const>                        mContinentalness;
    ::ll::TypedStorage<8, 8, int64 const>                        mErosion;
    ::ll::TypedStorage<8, 8, int64 const>                        mDepth;
    ::ll::TypedStorage<8, 8, int64 const>                        mWeirdness;
    ::ll::TypedStorage<8, 56, ::ClimateUtils::TargetSpace const> mTargetSpace;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetPoint();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    TargetPoint(float temperature, float humidity, float continentalness, float erosion, float depth, float weirdness);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(float temperature, float humidity, float continentalness, float erosion, float depth, float weirdness);
    // NOLINTEND
};
