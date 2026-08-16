#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/ActorAcquiredItemEvent.h"
#include "mc/world/events/ActorAnimationChangedEvent.h"
#include "mc/world/events/ActorAttackEvent.h"
#include "mc/world/events/ActorCarriedItemChangedEvent.h"
#include "mc/world/events/ActorDefinitionEndedEvent.h"
#include "mc/world/events/ActorDefinitionTriggeredEvent.h"
#include "mc/world/events/ActorDiedEvent.h"
#include "mc/world/events/ActorDroppedItemEvent.h"
#include "mc/world/events/ActorEquippedArmorEvent.h"
#include "mc/world/events/ActorGriefingBlockEvent.h"
#include "mc/world/events/ActorHealEvent.h"
#include "mc/world/events/ActorHealthChangedEvent.h"
#include "mc/world/events/ActorHurtEvent.h"
#include "mc/world/events/ActorItemEventAfterDroppedItem.h"
#include "mc/world/events/ActorKilledEvent.h"
#include "mc/world/events/ActorPlacedItemEvent.h"
#include "mc/world/events/ActorRemoveEffectEvent.h"
#include "mc/world/events/ActorRemovedEvent.h"
#include "mc/world/events/ActorStartRidingEvent.h"
#include "mc/world/events/ActorStopRidingEvent.h"
#include "mc/world/events/ActorUpgradeEndedEvent.h"
#include "mc/world/events/ActorUpgradeTriggeredEvent.h"
#include "mc/world/events/ActorUseItemEvent.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/KnockBackEvent.h"
#include "mc/world/events/MountTamingEvent.h"
#include "mc/world/events/ProjectileHitEvent.h"


template <typename Result>
struct ActorGameplayEvent;

template <>
struct ActorGameplayEvent<void> : ConstEventVariant<
                                      ActorAcquiredItemEvent,
                                      ActorAnimationChangedEvent,
                                      ActorAttackEvent,
                                      ActorCarriedItemChangedEvent,
                                      ActorDefinitionTriggeredEvent,
                                      ActorDefinitionEndedEvent,
                                      ActorDiedEvent,
                                      ActorDroppedItemEvent,
                                      ActorEquippedArmorEvent,
                                      ActorHealEvent,
                                      ActorHurtEvent,
                                      ActorHealthChangedEvent,
                                      ActorKilledEvent,
                                      ActorPlacedItemEvent,
                                      ActorRemovedEvent,
                                      ActorRemoveEffectEvent,
                                      ActorStartRidingEvent,
                                      ActorUpgradeTriggeredEvent,
                                      ActorUpgradeEndedEvent,
                                      ActorUseItemEvent,
                                      KnockBackEvent,
                                      MountTamingEvent,
                                      ActorItemEventAfterDroppedItem> {};

template <>
struct ActorGameplayEvent<CoordinatorResult>
: ConstEventVariant<ProjectileHitEvent, ActorGriefingBlockEvent, ActorStopRidingEvent> {};
