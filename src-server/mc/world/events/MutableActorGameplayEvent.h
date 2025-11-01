#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/ActorAddEffectEvent.h"
#include "mc/world/events/ActorDefinitionStartedEvent.h"
#include "mc/world/events/EventVariantImpl.h"

template <typename Result>
struct MutableActorGameplayEvent;

template <>
struct MutableActorGameplayEvent<CoordinatorResult>
: MutableEventVariant<ActorDefinitionStartedEvent, ActorAddEffectEvent> {};
