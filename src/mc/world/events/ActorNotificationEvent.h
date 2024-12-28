#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
                                    ::ProjectileHitEvent const,
                                    ::ActorGriefingBlockEvent const,
                                    ::ActorStopRidingEvent const,
                                    ::ActorDefinitionStartedEvent const,
                                    ::ActorAddEffectEvent const> {
public:
    // prevent constructor by default
    ActorNotificationEvent& operator=(ActorNotificationEvent const&);
    ActorNotificationEvent(ActorNotificationEvent const&);
    ActorNotificationEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorNotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
