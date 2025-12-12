#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    virtual ::EventResult onEvent(::ActorRemovedEvent const& actorRemovedEvent) /*override*/;

    virtual ::EventResult onEvent(::ActorRemoveEffectEvent const& actorRemoveEffectEvent) /*override*/;

    virtual ::EventResult onEvent(::ActorAttackEvent const& actorAttackEvent) /*override*/;

    virtual ::EventResult onEvent(::ActorHurtEvent const& actorHurtEvent) /*override*/;

    virtual ::EventResult onEvent(::ActorHealthChangedEvent const& actorHealthChangedEvent) /*override*/;

    virtual ::EventResult onEvent(::ActorDiedEvent const& actorDiedEvent) /*override*/;

    virtual ::EventResult onEvent(::ProjectileHitEvent const& projectileHitEvent) /*override*/;

    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod) /*override*/;

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
