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
    MCNAPI ::EventResult $onEvent(::ActorAddEffectEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ActorDefinitionEndedEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ActorUpgradeEndedEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ActorHealEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ActorHurtEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ActorDiedEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ActorAttackEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ActorHealthChangedEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ActorDroppedItemEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ProjectileHitEvent const& projectileHitEvent);

    MCNAPI ::EventResult $onEvent(::ActorRemovedEvent const& actorRemovedEvent);

    MCNAPI ::EventResult $onEvent(::MountTamingEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::TamingEvent const& eventData);

    MCNAPI ::EventResult $onActorSneakChanged(::Actor& actor, bool isSneaking);

    MCNAPI ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
