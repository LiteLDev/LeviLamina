#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeMultinoiseGenRulesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTemperature;
    ::ll::TypedStorage<4, 4, float> mHumidity;
    ::ll::TypedStorage<4, 4, float> mAltitude;
    ::ll::TypedStorage<4, 4, float> mWeirdness;
    ::ll::TypedStorage<4, 4, float> mWeight;
    // NOLINTEND
};
