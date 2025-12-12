#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/ScriptingEventHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"

// auto generated forward declare list
// clang-format off
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
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::BeforeWatchdogTerminateEvent& beforeWatchdogTerminateEvent) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ScriptModuleStartupEvent const& moduleStartupEvent) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ScriptModuleShutdownEvent const& moduleShutdownEvent) /*override*/;

    virtual ~ScriptScriptingEventHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _handlScriptModuleShutdownEvent(
        ::ScriptModuleShutdownEvent const&                                                moduleShutdownEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> scriptSystemBeforeEventsHandle
    ) const;

    MCNAPI bool _handleScriptModuleStartupEvent(
        ::ScriptModuleStartupEvent const&                                                 moduleStartupEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> scriptSystemBeforeEventsHandle
    ) const;

    MCNAPI bool _handleWatchdogTerminateEvent(
        ::BeforeWatchdogTerminateEvent&                                                   beforeWatchdogTerminateEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> scriptSystemBeforeEventsHandle
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::BeforeWatchdogTerminateEvent& beforeWatchdogTerminateEvent);

    MCNAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::ScriptModuleStartupEvent const& moduleStartupEvent);

    MCNAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::ScriptModuleShutdownEvent const& moduleShutdownEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
