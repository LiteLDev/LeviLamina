#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorEventListener;
struct ActorAttackEvent;
struct ActorDefinitionEndedEvent;
struct ActorDiedEvent;
struct ActorHealthChangedEvent;
struct ActorHurtEvent;
struct ActorRemoveEffectEvent;
struct ActorRemovedEvent;
struct ProjectileHitEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorEventListener : public ::EventListenerDispatcher<::ActorEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnked5a78;
    ::ll::UntypedStorage<8, 16> mUnk68e45b;
    ::ll::UntypedStorage<1, 1>  mUnke2e13d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorEventListener& operator=(ScriptActorEventListener const&);
    ScriptActorEventListener(ScriptActorEventListener const&);
    ScriptActorEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 28
    virtual ::EventResult onEvent(::ActorRemovedEvent const& actorRemovedEvent) /*override*/;

    // vIndex: 27
    virtual ::EventResult onEvent(::ActorRemoveEffectEvent const& actorRemoveEffectEvent) /*override*/;

    // vIndex: 36
    virtual ::EventResult onEvent(::ActorDefinitionEndedEvent const& actorDefintionEvent) /*override*/;

    // vIndex: 39
    virtual ::EventResult onEvent(::ActorAttackEvent const& actorAttackEvent) /*override*/;

    // vIndex: 32
    virtual ::EventResult onEvent(::ActorHurtEvent const& actorHurtEvent) /*override*/;

    // vIndex: 31
    virtual ::EventResult onEvent(::ActorHealthChangedEvent const& actorHealthChangedEvent) /*override*/;

    // vIndex: 35
    virtual ::EventResult onEvent(::ActorDiedEvent const& actorDiedEvent) /*override*/;

    // vIndex: 22
    virtual ::EventResult onEvent(::ProjectileHitEvent const& projectileHitEvent) /*override*/;

    // vIndex: 7
    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod) /*override*/;

    // vIndex: 0
    virtual ~ScriptActorEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorRemovedEvent const& actorRemovedEvent);

    MCAPI ::EventResult $onEvent(::ActorRemoveEffectEvent const& actorRemoveEffectEvent);

    MCAPI ::EventResult $onEvent(::ActorDefinitionEndedEvent const& actorDefintionEvent);

    MCAPI ::EventResult $onEvent(::ActorAttackEvent const& actorAttackEvent);

    MCAPI ::EventResult $onEvent(::ActorHurtEvent const& actorHurtEvent);

    MCAPI ::EventResult $onEvent(::ActorHealthChangedEvent const& actorHealthChangedEvent);

    MCAPI ::EventResult $onEvent(::ActorDiedEvent const& actorDiedEvent);

    MCAPI ::EventResult $onEvent(::ProjectileHitEvent const& projectileHitEvent);

    MCAPI ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
