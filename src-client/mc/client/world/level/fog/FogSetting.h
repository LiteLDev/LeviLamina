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

public:
    // prevent constructor by default
    FogSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FogSetting(
        ::std::optional<::FogDistanceSetting>&&   distanceSetting,
        ::std::optional<::FogTransitionSetting>&& transitionSetting
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogSetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::optional<::FogDistanceSetting>&&   distanceSetting,
        ::std::optional<::FogTransitionSetting>&& transitionSetting
    );
    // NOLINTEND
};
