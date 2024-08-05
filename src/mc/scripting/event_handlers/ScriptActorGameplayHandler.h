#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/common/wrapper/HandlerResult.h"
#include "mc/events/ActorGameplayEvent.h"
#include "mc/events/MutableActorGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptActorGameplayHandler {
public:
    // prevent constructor by default
    ScriptActorGameplayHandler& operator=(ScriptActorGameplayHandler const&);
    ScriptActorGameplayHandler(ScriptActorGameplayHandler const&);
    ScriptActorGameplayHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptActorGameplayHandler() = default;

    // vIndex: 1
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ActorAddEffectEvent&);

    // vIndex: 2
    virtual ::HandlerResult handleEvent(struct ActorGameplayEvent<void> const& event);

    // vIndex: 3
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct ActorGameplayEvent<::CoordinatorResult> const& event);

    // vIndex: 4
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableActorGameplayEvent<::CoordinatorResult>& event);

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
    virtual ::HandlerResult handleEvent(struct ActorRemovedEvent const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _handleActorEffectAddedEvent(struct ActorAddEffectEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    MCAPI bool
    _handleActorRemoveEvent(struct ActorRemovedEvent const&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // NOLINTEND
};
