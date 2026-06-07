#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/level/fog/FogDistanceSetting.h"

struct FogTransitionSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 28, ::FogDistanceSetting> mInitialFog;
    ::ll::TypedStorage<4, 4, float>                 mMinTransitionPercentage;
    ::ll::TypedStorage<4, 4, float>                 mMidTransitionSeconds;
    ::ll::TypedStorage<4, 4, float>                 mMidTransitionPercentage;
    ::ll::TypedStorage<4, 4, float>                 mMaxTransitionSeconds;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::FogTransitionSetting
    convertToFixedDistance(::FogTransitionSetting const& setting, float renderDistance);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogTransitionSetting const& ZERO_SETTING();
    // NOLINTEND
};
