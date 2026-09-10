#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/scripting/modules/minecraft/Listener.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorAcquiredItemEvent;
struct ActorAddEffectEvent;
struct ActorAttackEvent;
struct ActorDefinitionEndedEvent;
struct ActorDiedEvent;
struct ActorDroppedItemEvent;
struct ActorHealEvent;
struct ActorHealthChangedEvent;
struct ActorHurtEvent;
struct ActorRemovedEvent;
struct ActorUpgradeEndedEvent;
struct MountTamingEvent;
struct ProjectileHitEvent;
struct TamingEvent;
namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils { struct Listener; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorGlobalEventListener : public ::EventListenerDispatcher<::ActorEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>>
        mListeners;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::ActorAddEffectEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorDefinitionEndedEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorUpgradeEndedEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorHealEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorHurtEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorDiedEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorAttackEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorHealthChangedEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorDroppedItemEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ProjectileHitEvent const& projectileHitEvent) /*override*/;

    virtual ::EventResult onEvent(::ActorRemovedEvent const& actorRemovedEvent) /*override*/;

    virtual ::EventResult onEvent(::MountTamingEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::TamingEvent const& eventData) /*override*/;

    virtual ::EventResult onActorSneakChanged(::Actor& actor, bool isSneaking) /*override*/;

    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorAddEffectEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorDefinitionEndedEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorUpgradeEndedEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorHealEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorHurtEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorDiedEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorAttackEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorHealthChangedEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorDroppedItemEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ProjectileHitEvent const& projectileHitEvent);

    MCAPI ::EventResult $onEvent(::ActorRemovedEvent const& actorRemovedEvent);

    MCAPI ::EventResult $onEvent(::MountTamingEvent const& eventData);

    MCAPI ::EventResult $onEvent(::TamingEvent const& eventData);

    MCAPI ::EventResult $onActorSneakChanged(::Actor& actor, bool isSneaking);

    MCAPI ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
