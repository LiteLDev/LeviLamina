#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/ItemGameplayEvent.h"
#include "mc/world/events/MutableItemGameplayEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptItemGameplayHandler {
public:
    // prevent constructor by default
    ScriptItemGameplayHandler& operator=(ScriptItemGameplayHandler const&);
    ScriptItemGameplayHandler(ScriptItemGameplayHandler const&);
    ScriptItemGameplayHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemGameplayHandler() = default;

    // vIndex: 1
    virtual ::HandlerResult handleEvent(struct ItemGameplayEvent<void> const& event);

    // vIndex: 2
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableItemGameplayEvent<::CoordinatorResult>& event);

    // vIndex: 3
    virtual void __unk_vfn_3();

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
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ItemUseOnEvent& itemEvent);

    // vIndex: 11
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ItemUseEvent& itemEvent);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _handleItemUseEvent(
        struct ItemUseEvent&                      itemEvent,
        class Scripting::WeakLifetimeScope const& scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    );

    MCAPI bool _handleItemUseOnEvent(
        struct ItemUseOnEvent&                    itemEvent,
        class Scripting::WeakLifetimeScope const& scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI ::HandlerResult handleEvent$(struct ItemGameplayEvent<void> const& event);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent$(struct MutableItemGameplayEvent<::CoordinatorResult>& event);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult> handleEvent$(struct ItemUseOnEvent& itemEvent);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult> handleEvent$(struct ItemUseEvent& itemEvent);

    // NOLINTEND
};
