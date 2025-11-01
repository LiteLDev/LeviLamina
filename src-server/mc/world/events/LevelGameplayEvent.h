#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/LevelAddedActorEvent.h"
#include "mc/world/events/LevelBroadcastEvent.h"
#include "mc/world/events/LevelDayCycleEvent.h"
#include "mc/world/events/LevelGameRuleChangeEvent.h"
#include "mc/world/events/LevelStartLeaveGameEvent.h"
#include "mc/world/events/ScriptingWorldInitializeEvent.h"
#include "mc/world/level/LevelSoundBroadcastEvent.h"

template<typename Return>
struct LevelGameplayEvent;

template <>
struct LevelGameplayEvent<void> : ConstEventVariant<
                                      LevelAddedActorEvent,
                                      LevelBroadcastEvent,
                                      LevelSoundBroadcastEvent,
                                      LevelDayCycleEvent,
                                      LevelStartLeaveGameEvent,
                                      LevelGameRuleChangeEvent,
                                      ScriptingWorldInitializeEvent> {
};
