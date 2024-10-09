#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/ActorGameplayEvent.h"
#include "mc/world/events/MutableActorGameplayEvent.h"

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
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct ActorAddEffectEvent& actorEffectAddedEvent);

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
    virtual ::HandlerResult handleEvent(struct ActorRemovedEvent const& actorRemovedEvent);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _handleActorEffectAddedEvent(
        struct ActorAddEffectEvent&               actorEffectAddedEvent,
        class Scripting::WeakLifetimeScope const& scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    ) const;

    MCAPI bool _handleActorRemoveEvent(
        struct ActorRemovedEvent const&           actorRemovedEvent,
        class Scripting::WeakLifetimeScope const& scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    ) const;

    // NOLINTEND
};
