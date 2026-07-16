#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/level/fog/FogDistanceSetting.h"
#include "mc/client/world/level/fog/FogTransitionSetting.h"

struct FogSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 28, ::FogDistanceSetting>   mDistanceSetting;
    ::ll::TypedStorage<4, 44, ::FogTransitionSetting> mTransitionSetting;
    // NOLINTEND
};
