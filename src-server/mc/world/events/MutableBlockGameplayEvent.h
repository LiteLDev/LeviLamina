#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/BlockTryDestroyByPlayerEvent.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/ExplosionStartedEvent.h"

template<typename Result>
struct MutableBlockGameplayEvent;

template <>
struct MutableBlockGameplayEvent<CoordinatorResult>
: MutableEventVariant<ExplosionStartedEvent, BlockTryDestroyByPlayerEvent> {
};
