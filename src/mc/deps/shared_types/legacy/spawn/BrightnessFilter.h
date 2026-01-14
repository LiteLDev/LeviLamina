#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct BrightnessFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mMin;
    ::ll::TypedStorage<4, 4, int>  mMax;
    ::ll::TypedStorage<1, 1, bool> mAdjustForWeather;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
