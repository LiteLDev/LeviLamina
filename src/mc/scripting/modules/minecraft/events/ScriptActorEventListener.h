#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
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
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorEventListener : public ::EventListenerDispatcher<::ActorEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents>>
                                                              mScriptEventsHandle;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<1, 1, bool>                            mAfterListener;
    // NOLINTEND

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
    MCAPI ::EventResult $onEvent(::ActorRemovedEvent const& actorRemovedEvent);

    MCFOLD ::EventResult $onEvent(::ActorRemoveEffectEvent const& actorRemoveEffectEvent);

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
