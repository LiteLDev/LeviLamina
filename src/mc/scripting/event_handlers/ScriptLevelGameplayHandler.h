#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"

// auto generated forward declare list
// clang-format off
class LevelGameplayHandler;
struct LevelWeatherChangedEvent;
struct ScriptingWorldInitializeEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptLevelGameplayHandler : public ::EventHandlerDispatcher<::LevelGameplayHandler>,
                                   public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::LevelWeatherChangedEvent& event) /*override*/;

    // vIndex: 4
    virtual ::HandlerResult handleEvent(::ScriptingWorldInitializeEvent const& event) /*override*/;

    // vIndex: 0
    virtual ~ScriptLevelGameplayHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _handleScriptingWorldInitializeEvent(
        ::ScriptingWorldInitializeEvent const&                                            eventData,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;

    MCAPI bool _handleWeatherChangedEvent(
        ::LevelWeatherChangedEvent&                                                       weatherChangedEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::LevelWeatherChangedEvent& event);

    MCAPI ::HandlerResult $handleEvent(::ScriptingWorldInitializeEvent const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
