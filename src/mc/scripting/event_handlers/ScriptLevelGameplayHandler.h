#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
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
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptLevelGameplayHandler : public ::EventHandlerDispatcher<::LevelGameplayHandler>,
                                   public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::LevelWeatherChangedEvent& event) /*override*/;

    virtual ::HandlerResult handleEvent(::ScriptingWorldInitializeEvent const& event) /*override*/;

    virtual ~ScriptLevelGameplayHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _handleScriptingWorldInitializeEvent(
        ::ScriptingWorldInitializeEvent const&                                            eventData,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;

    MCNAPI bool _handleWeatherChangedEvent(
        ::LevelWeatherChangedEvent&                                                       weatherChangedEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::LevelWeatherChangedEvent& event);

    MCNAPI ::HandlerResult $handleEvent(::ScriptingWorldInitializeEvent const& event);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
