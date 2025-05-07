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
    // vIndex: 30
    virtual ::EventResult onEvent(::ActorRemovedEvent const& actorRemovedEvent) /*override*/;

    // vIndex: 29
    virtual ::EventResult onEvent(::ActorRemoveEffectEvent const& actorRemoveEffectEvent) /*override*/;

    // vIndex: 41
    virtual ::EventResult onEvent(::ActorAttackEvent const& actorAttackEvent) /*override*/;

    // vIndex: 34
    virtual ::EventResult onEvent(::ActorHurtEvent const& actorHurtEvent) /*override*/;

    // vIndex: 33
    virtual ::EventResult onEvent(::ActorHealthChangedEvent const& actorHealthChangedEvent) /*override*/;

    // vIndex: 37
    virtual ::EventResult onEvent(::ActorDiedEvent const& actorDiedEvent) /*override*/;

    // vIndex: 23
    virtual ::EventResult onEvent(::ProjectileHitEvent const& projectileHitEvent) /*override*/;

    // vIndex: 7
    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod) /*override*/;

    // vIndex: 0
    virtual ~ScriptActorEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ActorRemovedEvent const& actorRemovedEvent);

    MCNAPI ::EventResult $onEvent(::ActorRemoveEffectEvent const& actorRemoveEffectEvent);

    MCNAPI ::EventResult $onEvent(::ActorAttackEvent const& actorAttackEvent);

    MCNAPI ::EventResult $onEvent(::ActorHurtEvent const& actorHurtEvent);

    MCNAPI ::EventResult $onEvent(::ActorHealthChangedEvent const& actorHealthChangedEvent);

    MCNAPI ::EventResult $onEvent(::ActorDiedEvent const& actorDiedEvent);

    MCNAPI ::EventResult $onEvent(::ProjectileHitEvent const& projectileHitEvent);

    MCNAPI ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
