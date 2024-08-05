#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClimateUtils { struct Parameter; }
// clang-format on

struct ClimateParameters {
public:
    // prevent constructor by default
    ClimateParameters& operator=(ClimateParameters const&);
    ClimateParameters(ClimateParameters const&);
    ClimateParameters();

public:
    // NOLINTBEGIN
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
