#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/gameplayhandlers/LevelGameplayHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"

// auto generated forward declare list
// clang-format off
struct LevelWeatherChangedEvent;
struct ScriptingWorldInitializeEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
// clang-format on

class ScriptLevelGameplayHandler : public ::EventHandlerDispatcher<::LevelGameplayHandler>,
                                   public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::LevelWeatherChangedEvent& event) /*override*/;

    virtual ::HandlerResult handleEvent(::ScriptingWorldInitializeEvent const& event) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::LevelWeatherChangedEvent& event);

    MCAPI ::HandlerResult $handleEvent(::ScriptingWorldInitializeEvent const& event);


    // NOLINTEND
};
