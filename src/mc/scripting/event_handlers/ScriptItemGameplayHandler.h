#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/ItemGameplayHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"

// auto generated forward declare list
// clang-format off
struct ItemUseEvent;
struct ItemUseOnEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
// clang-format on

class ScriptItemGameplayHandler : public ::EventHandlerDispatcher<::ItemGameplayHandler>,
                                  public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::ItemUseOnEvent& itemEvent) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::ItemUseEvent& itemEvent) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ItemUseOnEvent& itemEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ItemUseEvent& itemEvent);


    // NOLINTEND
};
