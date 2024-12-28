#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#include "mc/world/events/MutablePlayerGameplayEvent.h"
#include "mc/world/events/PlayerGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class PlayerGameplayHandler;
struct PlayerDisconnectEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptPlayerGameplayHandler : public ::EventHandlerDispatcher<::PlayerGameplayHandler>,
                                    public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // prevent constructor by default
    ScriptPlayerGameplayHandler& operator=(ScriptPlayerGameplayHandler const&);
    ScriptPlayerGameplayHandler(ScriptPlayerGameplayHandler const&);
    ScriptPlayerGameplayHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 27
    virtual ::HandlerResult handleEvent(::PlayerDisconnectEvent const& playerDisconnectEvent) /*override*/;

    // vIndex: 1
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutablePlayerGameplayEvent<::CoordinatorResult>& event) /*override*/;

    // vIndex: 2
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::PlayerGameplayEvent<::CoordinatorResult> const& event) /*override*/;

    // vIndex: 0
    virtual ~ScriptPlayerGameplayHandler() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _handleCoordinatorPlayerGameplayEvent(
        ::PlayerGameplayEvent<::CoordinatorResult> const&                                 event,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    );

    MCAPI bool _handleMutablePlayerGameplayEvent(
        ::MutablePlayerGameplayEvent<::CoordinatorResult>&                                event,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;

    MCAPI bool _handlePlayerDisconnectEvent(
        ::PlayerDisconnectEvent const&                                                    playerDisconnectEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
