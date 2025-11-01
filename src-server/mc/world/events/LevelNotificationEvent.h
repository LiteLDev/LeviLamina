#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventVariantImpl.h"

// auto generated forward declare list
// clang-format off
struct LevelAddedActorEvent;
struct LevelBroadcastEvent;
struct LevelDayCycleEvent;
struct LevelGameRuleChangeEvent;
struct LevelSoundBroadcastEvent;
struct LevelStartLeaveGameEvent;
struct LevelWeatherChangedEvent;
struct ScriptingWorldInitializeEvent;
// clang-format on

struct LevelNotificationEvent : public ::EventVariantImpl<::LevelAddedActorEvent const, ::LevelBroadcastEvent const, ::LevelSoundBroadcastEvent const, ::LevelDayCycleEvent const, ::LevelStartLeaveGameEvent const, ::LevelGameRuleChangeEvent const, ::ScriptingWorldInitializeEvent const, ::LevelWeatherChangedEvent const> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LevelNotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
