#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ActorEventListener;
struct ActorAddEffectEvent;
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

    // vIndex: 0
    virtual ~ScriptActorGlobalEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    unregisterListener(::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents> handle);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorAddEffectEvent const& actorAddEffectEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
