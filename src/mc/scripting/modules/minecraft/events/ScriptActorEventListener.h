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
    // prevent constructor by default
    ScriptActorEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod) /*override*/;

    virtual ::EventResult onEvent(::ActorRemovedEvent const& actorRemovedEvent) /*override*/;

    virtual ::EventResult onEvent(::ProjectileHitEvent const& projectileHitEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorEventListener(
        ::Scripting::WeakLifetimeScope const&                                            scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents> handle,
        bool                                                                             afterListener
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&                                            scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents> handle,
        bool                                                                             afterListener
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);

    MCAPI ::EventResult $onEvent(::ActorRemovedEvent const& actorRemovedEvent);

    MCAPI ::EventResult $onEvent(::ProjectileHitEvent const& projectileHitEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
