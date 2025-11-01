#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/PlayerGameModeChangeEvent.h"

template<typename Return>
struct MutablePlayerGameplayEvent;
template <>
struct MutablePlayerGameplayEvent<CoordinatorResult> : MutableEventVariant<PlayerGameModeChangeEvent> {
};
