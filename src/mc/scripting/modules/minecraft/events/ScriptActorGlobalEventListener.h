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
struct ActorDiedEvent;
struct ActorHurtEvent;
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
        ::ll::TypedStorage<1, 1, bool> mIsV010;
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
    virtual ::EventResult onEvent(::ActorAddEffectEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorDefinitionEndedEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorHurtEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ActorDiedEvent const& eventData) /*override*/;

    virtual ~ScriptActorGlobalEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorAddEffectEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorDefinitionEndedEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorHurtEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ActorDiedEvent const& eventData);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
