#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/MutablePlayerGameplayEvent.h"
#include "mc/world/events/PlayerGameplayEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptPlayerGameplayHandler {
public:
    // prevent constructor by default
    ScriptPlayerGameplayHandler& operator=(ScriptPlayerGameplayHandler const&);
    ScriptPlayerGameplayHandler(ScriptPlayerGameplayHandler const&);
    ScriptPlayerGameplayHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPlayerGameplayHandler() = default;

    // vIndex: 1
    virtual ::HandlerResult handleEvent(struct PlayerGameplayEvent<void> const& event);

    // vIndex: 2
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct PlayerGameplayEvent<::CoordinatorResult> const& event);

    // vIndex: 3
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutablePlayerGameplayEvent<::CoordinatorResult>& event);

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void __unk_vfn_5();

    // vIndex: 6
    virtual void __unk_vfn_6();

    // vIndex: 7
    virtual void __unk_vfn_7();

    // vIndex: 8
    virtual void __unk_vfn_8();

    // vIndex: 9
    virtual void __unk_vfn_9();

    // vIndex: 10
    virtual void __unk_vfn_10();

    // vIndex: 11
    virtual void __unk_vfn_11();

    // vIndex: 12
    virtual void __unk_vfn_12();

    // vIndex: 13
    virtual void __unk_vfn_13();

    // vIndex: 14
    virtual void __unk_vfn_14();

    // vIndex: 15
    virtual void __unk_vfn_15();

    // vIndex: 16
    virtual void __unk_vfn_16();

    // vIndex: 17
    virtual void __unk_vfn_17();

    // vIndex: 18
    virtual void __unk_vfn_18();

    // vIndex: 19
    virtual void __unk_vfn_19();

    // vIndex: 20
    virtual void __unk_vfn_20();

    // vIndex: 21
    virtual void __unk_vfn_21();

    // vIndex: 22
    virtual void __unk_vfn_22();

    // vIndex: 23
    virtual void __unk_vfn_23();

    // vIndex: 24
    virtual ::HandlerResult handleEvent(struct PlayerDisconnectEvent const& playerDisconnectEvent);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _handleCoordinatorPlayerGameplayEvent(
        struct PlayerGameplayEvent<::CoordinatorResult> const& event,
        class Scripting::WeakLifetimeScope const&              scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    );

    MCAPI bool _handleMutablePlayerGameplayEvent(
        struct MutablePlayerGameplayEvent<::CoordinatorResult>& event,
        class Scripting::WeakLifetimeScope const&               scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    ) const;

    MCAPI bool _handlePlayerDisconnectEvent(
        struct PlayerDisconnectEvent const&       playerDisconnectEvent,
        class Scripting::WeakLifetimeScope const& scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::HandlerResult handleEvent$(struct PlayerGameplayEvent<void> const& event);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent$(struct PlayerGameplayEvent<::CoordinatorResult> const& event);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent$(struct MutablePlayerGameplayEvent<::CoordinatorResult>& event);

    MCAPI ::HandlerResult handleEvent$(struct PlayerDisconnectEvent const& playerDisconnectEvent);

    // NOLINTEND
};
