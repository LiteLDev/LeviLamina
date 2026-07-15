#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/BlockGameplayHandler.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"

// auto generated forward declare list
// clang-format off
struct BlockTryDestroyByPlayerEvent;
struct BlockTryPlaceByPlayerEvent;
struct ExplosionStartedEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
// clang-format on

class ScriptBlockGameplayHandler : public ::EventHandlerDispatcher<::BlockGameplayHandler>,
                                   public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ExplosionStartedEvent& explosionStartedEvent) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::BlockTryDestroyByPlayerEvent& eventData) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::BlockTryPlaceByPlayerEvent const& eventData) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ExplosionStartedEvent& explosionStartedEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::BlockTryDestroyByPlayerEvent& eventData);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::BlockTryPlaceByPlayerEvent const& eventData);


    // NOLINTEND
};
