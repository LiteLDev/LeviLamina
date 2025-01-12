#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"

// auto generated forward declare list
// clang-format off
class ScriptingEventHandler;
struct BeforeWatchdogTerminateEvent;
struct ScriptModuleShutdownEvent;
struct ScriptModuleStartupEvent;
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptScriptingEventHandler : public ::EventHandlerDispatcher<::ScriptingEventHandler>,
                                    public ::ScriptEventHandler<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::BeforeWatchdogTerminateEvent& beforeWatchdogTerminateEvent) /*override*/;

    // vIndex: 4
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ScriptModuleStartupEvent const& moduleStartupEvent) /*override*/;

    // vIndex: 3
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ScriptModuleShutdownEvent const& moduleShutdownEvent) /*override*/;

    // vIndex: 0
    virtual ~ScriptScriptingEventHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _handlScriptModuleShutdownEvent(
        ::ScriptModuleShutdownEvent const&                                                moduleShutdownEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> scriptSystemBeforeEventsHandle
    ) const;

    MCAPI bool _handleScriptModuleStartupEvent(
        ::ScriptModuleStartupEvent const&                                                 moduleStartupEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> scriptSystemBeforeEventsHandle
    ) const;

    MCAPI bool _handleWatchdogTerminateEvent(
        ::BeforeWatchdogTerminateEvent&                                                   beforeWatchdogTerminateEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> scriptSystemBeforeEventsHandle
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::BeforeWatchdogTerminateEvent& beforeWatchdogTerminateEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ScriptModuleStartupEvent const& moduleStartupEvent
    );

    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::ScriptModuleShutdownEvent const& moduleShutdownEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
