#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"

// auto generated forward declare list
// clang-format off
class ItemGameplayHandler;
struct ItemUseEvent;
struct ItemUseOnEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptItemGameplayHandler : public ::EventHandlerDispatcher<::ItemGameplayHandler>,
                                  public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::ItemUseOnEvent& itemEvent) /*override*/;

    // vIndex: 10
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::ItemUseEvent& itemEvent) /*override*/;

    // vIndex: 0
    virtual ~ScriptItemGameplayHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _handleItemUseEvent(
        ::ItemUseEvent&                                                                   itemEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    );

    MCAPI bool _handleItemUseOnEvent(
        ::ItemUseOnEvent&                                                                 itemEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ItemUseOnEvent& itemEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ItemUseEvent& itemEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
