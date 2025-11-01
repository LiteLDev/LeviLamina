#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/LevelAddedActorEvent.h"
#include "mc/world/events/LevelBroadcastEvent.h"
#include "mc/world/events/LevelDayCycleEvent.h"
#include "mc/world/events/LevelGameRuleChangeEvent.h"
#include "mc/world/events/LevelStartLeaveGameEvent.h"
#include "mc/world/events/LevelWeatherChangedEvent.h"
#include "mc/world/events/ScriptingWorldInitializeEvent.h"
#include "mc/world/level/LevelSoundBroadcastEvent.h"

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
