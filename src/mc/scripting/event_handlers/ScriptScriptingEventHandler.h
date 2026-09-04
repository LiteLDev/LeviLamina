#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::BeforeWatchdogTerminateEvent& beforeWatchdogTerminateEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::ScriptModuleStartupEvent const& moduleStartupEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::ScriptModuleShutdownEvent const& moduleShutdownEvent);


    // NOLINTEND
};
