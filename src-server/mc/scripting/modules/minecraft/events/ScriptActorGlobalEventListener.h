#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ActorAddEffectEvent;
struct ActorDefinitionEndedEvent;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorGlobalEventListener : public ::EventListenerDispatcher<::ActorEventListener> {
public:
    // ScriptActorGlobalEventListener inner types declare
    // clang-format off
    struct Listener;
    // clang-format on

    // ScriptActorGlobalEventListener inner types define
    struct Listener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
        ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents>>
                                       mScriptEventsHandle;
        ::ll::TypedStorage<1, 1, bool> mAfterListener;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptActorGlobalEventListener::Listener>>
        mListeners;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 18
    virtual ::EventResult onEvent(::ActorAddEffectEvent const& actorAddEffectEvent) /*override*/;

    // vIndex: 38
    virtual ::EventResult onEvent(::ActorDefinitionEndedEvent const& actorDefinitionEndedEvent) /*override*/;

    // vIndex: 0
    virtual ~ScriptActorGlobalEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorAddEffectEvent const& actorAddEffectEvent);

    MCAPI ::EventResult $onEvent(::ActorDefinitionEndedEvent const& actorDefinitionEndedEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
