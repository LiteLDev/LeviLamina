#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/LevelWeatherChangedEvent.h"

template <typename Return>
struct MutableLevelGameplayEvent;

template <>
struct MutableLevelGameplayEvent<CoordinatorResult> : MutableEventVariant<LevelWeatherChangedEvent> {};
