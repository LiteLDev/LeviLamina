#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ActorEventListener;
struct ActorAddEffectEvent;
struct ActorDefinitionEndedEvent;
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
        ::ll::UntypedStorage<8, 16> mUnk9fb76e;
        ::ll::UntypedStorage<8, 16> mUnk139cda;
        ::ll::UntypedStorage<1, 1>  mUnk486be0;
        // NOLINTEND

    public:
        // prevent constructor by default
        Listener& operator=(Listener const&);
        Listener(Listener const&);
        Listener();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3c3251;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorGlobalEventListener& operator=(ScriptActorGlobalEventListener const&);
    ScriptActorGlobalEventListener(ScriptActorGlobalEventListener const&);
    ScriptActorGlobalEventListener();

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ActorAddEffectEvent const& actorAddEffectEvent);

    MCNAPI ::EventResult $onEvent(::ActorDefinitionEndedEvent const& actorDefinitionEndedEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
