#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ServerNetworkEventListener.h"

// auto generated forward declare list
// clang-format off
struct ChatEvent;
struct MessageEvent;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptServerNetworkEventListener : public ::EventListenerDispatcher<::ServerNetworkEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents>>
        mScriptEventsHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerNetworkEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::ChatEvent const& chatEvent) /*override*/;

    virtual ::EventResult onMessage(::MessageEvent const& messageEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptServerNetworkEventListener(
        ::Scripting::WeakLifetimeScope const&                                            scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents> handle
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&                                            scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents> handle
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ChatEvent const& chatEvent);

    MCAPI ::EventResult $onMessage(::MessageEvent const& messageEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
