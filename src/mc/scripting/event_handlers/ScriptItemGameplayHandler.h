#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/common/wrapper/HandlerResult.h"
#include "mc/events/MutableItemGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/item/components/ItemGameplayEvent.h"

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
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ItemUseOnEvent&);

    // vIndex: 11
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ItemUseEvent&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _handleItemUseEvent(struct ItemUseEvent&, class Scripting::WeakLifetimeScope const& scope, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>);

    MCAPI bool
    _handleItemUseOnEvent(struct ItemUseOnEvent&, class Scripting::WeakLifetimeScope const& scope, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>);

    // NOLINTEND
};
