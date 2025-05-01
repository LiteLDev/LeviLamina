#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/ActorAcquiredItemEvent.h"
#include "mc/world/events/ActorAddEffectEvent.h"
#include "mc/world/events/ActorAnimationChangedEvent.h"
#include "mc/world/events/ActorAttackEvent.h"
#include "mc/world/events/ActorCarriedItemChangedEvent.h"
#include "mc/world/events/ActorDefinitionEndedEvent.h"
#include "mc/world/events/ActorDefinitionStartedEvent.h"
#include "mc/world/events/ActorDefinitionTriggeredEvent.h"
#include "mc/world/events/ActorDiedEvent.h"
#include "mc/world/events/ActorDroppedItemEvent.h"
#include "mc/world/events/ActorEquippedArmorEvent.h"
#include "mc/world/events/ActorGriefingBlockEvent.h"
#include "mc/world/events/ActorHealthChangedEvent.h"
#include "mc/world/events/ActorHurtEvent.h"
#include "mc/world/events/ActorKilledEvent.h"
#include "mc/world/events/ActorPlacedItemEvent.h"
#include "mc/world/events/ActorRemoveEffectEvent.h"
#include "mc/world/events/ActorRemovedEvent.h"
#include "mc/world/events/ActorStartRidingEvent.h"
#include "mc/world/events/ActorStopRidingEvent.h"
#include "mc/world/events/ActorUseItemEvent.h"
#include "mc/world/events/KnockBackEvent.h"
#include "mc/world/events/MountTamingEvent.h"
#include "mc/world/events/ProjectileHitEvent.h"


// auto generated inclusion list
#include "mc/world/events/EventVariantImpl.h"

// auto generated forward declare list
// clang-format off
struct ActorAcquiredItemEvent;
struct ActorAddEffectEvent;
struct ActorAnimationChangedEvent;
struct ActorAttackEvent;
struct ActorCarriedItemChangedEvent;
struct ActorDefinitionEndedEvent;
struct ActorDefinitionStartedEvent;
struct ActorDefinitionTriggeredEvent;
struct ActorDiedEvent;
struct ActorDroppedItemEvent;
struct ActorEquippedArmorEvent;
struct ActorGriefingBlockEvent;
struct ActorHealthChangedEvent;
struct ActorHurtEvent;
struct ActorItemEventAfterDroppedItem;
struct ActorItemEventBeforeDroppedItem;
struct ActorKilledEvent;
struct ActorPlacedItemEvent;
struct ActorRemoveEffectEvent;
struct ActorRemovedEvent;
struct ActorStartRidingEvent;
struct ActorStopRidingEvent;
struct ActorUseItemEvent;
struct KnockBackEvent;
struct MountTamingEvent;
struct ProjectileHitEvent;
// clang-format on

struct ActorNotificationEvent : public ::EventVariantImpl<
                                    ::ActorAcquiredItemEvent const,
                                    ::ActorAnimationChangedEvent const,
                                    ::ActorAttackEvent const,
                                    ::ActorCarriedItemChangedEvent const,
                                    ::ActorDefinitionTriggeredEvent const,
                                    ::ActorDefinitionEndedEvent const,
                                    ::ActorDiedEvent const,
                                    ::ActorDroppedItemEvent const,
                                    ::ActorEquippedArmorEvent const,
                                    ::ActorHurtEvent const,
                                    ::ActorHealthChangedEvent const,
                                    ::ActorKilledEvent const,
                                    ::ActorPlacedItemEvent const,
                                    ::ActorRemovedEvent const,
                                    ::ActorRemoveEffectEvent const,
                                    ::ActorStartRidingEvent const,
                                    ::ActorUseItemEvent const,
                                    ::KnockBackEvent const,
                                    ::MountTamingEvent const,
                                    ::ActorItemEventAfterDroppedItem const,
                                    ::ProjectileHitEvent const,
                                    ::ActorGriefingBlockEvent const,
                                    ::ActorStopRidingEvent const,
                                    ::ActorItemEventBeforeDroppedItem const,
                                    ::ActorDefinitionStartedEvent const,
                                    ::ActorAddEffectEvent const> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorNotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
