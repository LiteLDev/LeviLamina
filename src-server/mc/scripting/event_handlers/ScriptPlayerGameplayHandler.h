#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
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
struct PlayerGameModeChangeEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptPlayerGameplayHandler : public ::EventHandlerDispatcher<::PlayerGameplayHandler>, public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 32
    virtual ::HandlerResult handleEvent(::PlayerDisconnectEvent const& playerDisconnectEvent) /*override*/;

    // vIndex: 1
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::MutablePlayerGameplayEvent<::CoordinatorResult>& event) /*override*/;

    // vIndex: 2
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::PlayerGameplayEvent<::CoordinatorResult> const& event) /*override*/;

    // vIndex: 0
    virtual ~ScriptPlayerGameplayHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _handleCoordinatorPlayerGameplayEvent(::PlayerGameplayEvent<::CoordinatorResult> const& event, ::Scripting::WeakLifetimeScope const& scope, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle);

    MCNAPI bool _handleMutablePlayerGameplayEvent(::MutablePlayerGameplayEvent<::CoordinatorResult>& event, ::Scripting::WeakLifetimeScope const& scope, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle) const;

    MCNAPI bool _handlePlayerDisconnectEvent(::PlayerDisconnectEvent const& playerDisconnectEvent, ::Scripting::WeakLifetimeScope const& scope, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle) const;

    MCNAPI bool _handlePlayerGameModeChangeEvent(::PlayerGameModeChangeEvent& playerGameModeChangeEvent, ::Scripting::WeakLifetimeScope const& scope, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HandlerResult $handleEvent(::PlayerDisconnectEvent const& playerDisconnectEvent);

    MCNAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::MutablePlayerGameplayEvent<::CoordinatorResult>& event);

    MCNAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::PlayerGameplayEvent<::CoordinatorResult> const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
