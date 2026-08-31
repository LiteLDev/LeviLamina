#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/gameplayhandlers/PlayerGameplayHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#include "mc/world/events/MutablePlayerGameplayEvent.h"
#include "mc/world/events/PlayerGameplayEvent.h"

// auto generated forward declare list
// clang-format off
struct PlayerDisconnectEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
// clang-format on

class ScriptPlayerGameplayHandler : public ::EventHandlerDispatcher<::PlayerGameplayHandler>,
                                    public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HandlerResult handleEvent(::PlayerDisconnectEvent const& playerDisconnectEvent) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutablePlayerGameplayEvent<::CoordinatorResult>& event) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::PlayerGameplayEvent<::CoordinatorResult> const& event) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::HandlerResult $handleEvent(::PlayerDisconnectEvent const& playerDisconnectEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::MutablePlayerGameplayEvent<::CoordinatorResult>& event);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::PlayerGameplayEvent<::CoordinatorResult> const& event);


    // NOLINTEND
};
