#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelWeatherChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsRaining;
    ::ll::TypedStorage<1, 1, bool const> mIsLightning;
    ::ll::TypedStorage<1, 1, bool> mWillBeRaining;
    ::ll::TypedStorage<1, 1, bool> mWillBeLightning;
    ::ll::TypedStorage<4, 4, int> mRainTime;
    ::ll::TypedStorage<4, 4, int> mLightningTime;
    // NOLINTEND

};
