#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/Parameter.h"

// auto generated forward declare list
// clang-format off
namespace ClimateUtils { struct Parameter; }
// clang-format on

struct ClimateParameters {
public:
    ClimateUtils::Parameter mTemperature;
    ClimateUtils::Parameter mHumidity;
    ClimateUtils::Parameter mContinentalness;
    ClimateUtils::Parameter mErosion;
    ClimateUtils::Parameter mDepth;
    ClimateUtils::Parameter mWeirdness;
    float                   mOffset;
    ClimateUtils::Parameter mTemperature2;
    ClimateUtils::Parameter mHumidity2;
    ClimateUtils::Parameter mContinentalness2;
    ClimateUtils::Parameter mErosion2;
    ClimateUtils::Parameter mDepth2;
    ClimateUtils::Parameter mWeirdness2;
    ClimateUtils::Parameter mOffset2;

    // prevent constructor by default
    ClimateParameters& operator=(ClimateParameters const&);
    ClimateParameters(ClimateParameters const&);
    ClimateParameters();

public:
    // NOLINTBEGIN
    // symbol: ??0ClimateParameters@@QEAA@UParameter@ClimateUtils@@00000M@Z
    MCAPI ClimateParameters(
        struct ClimateUtils::Parameter temperature,
        struct ClimateUtils::Parameter humidity,
        struct ClimateUtils::Parameter continentalness,
        struct ClimateUtils::Parameter erosion,
        struct ClimateUtils::Parameter depth,
        struct ClimateUtils::Parameter weirdness,
        float                          offset
    );

    // NOLINTEND
};
