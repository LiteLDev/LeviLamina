#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/climate_utils/Parameter.h"

struct ClimateParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter> mTemperature;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter> mHumidity;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter> mContinentalness;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter> mErosion;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter> mDepth;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter> mWeirdness;
    ::ll::TypedStorage<8, 8, int64> mOffset;
    ::ll::TypedStorage<8, 112, ::std::array<::ClimateUtils::Parameter, 7>> mParameterSpace;
    // NOLINTEND

public:
    // prevent constructor by default
    ClimateParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClimateParameters(::ClimateUtils::Parameter temperature, ::ClimateUtils::Parameter humidity, ::ClimateUtils::Parameter continentalness, ::ClimateUtils::Parameter erosion, ::ClimateUtils::Parameter depth, ::ClimateUtils::Parameter weirdness, float offset);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ClimateUtils::Parameter temperature, ::ClimateUtils::Parameter humidity, ::ClimateUtils::Parameter continentalness, ::ClimateUtils::Parameter erosion, ::ClimateUtils::Parameter depth, ::ClimateUtils::Parameter weirdness, float offset);
    // NOLINTEND

};
