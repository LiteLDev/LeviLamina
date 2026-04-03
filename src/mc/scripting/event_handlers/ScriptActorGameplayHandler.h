#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/ActorGameplayHandler.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"

// auto generated forward declare list
// clang-format off
struct ActorAddEffectEvent;
struct ActorBeforeAcquireItemEvent;
struct ActorBeforeHealEvent;
struct ActorBeforeHurtEvent;
struct ActorRemovedEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptActorGameplayHandler : public ::EventHandlerDispatcher<::ActorGameplayHandler>,
                                   public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ActorAddEffectEvent& actorEffectAddedEvent) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ActorBeforeHealEvent& actorHealEvent) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ActorBeforeHurtEvent& actorHurtEvent) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ActorBeforeAcquireItemEvent& actorAquireItemEvent) /*override*/;

    virtual ::HandlerResult handleEvent(::ActorRemovedEvent const& actorRemovedEvent) /*override*/;

    virtual ~ScriptActorGameplayHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _handleActorAcquireItemEvent(
        ::ActorBeforeAcquireItemEvent&                                                    actorAcquireItemEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;

    MCAPI bool _handleActorEffectAddedEvent(
        ::ActorAddEffectEvent&                                                            actorEffectAddedEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;

    MCAPI bool _handleActorHealEvent(
        ::ActorBeforeHealEvent&                                                           actorBeforeHealEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    );

    MCAPI bool _handleActorHurtEvent(
        ::ActorBeforeHurtEvent&                                                           actorBeforeHurtEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    );

    MCAPI bool _handleActorRemoveEvent(
        ::ActorRemovedEvent const&                                                        actorRemovedEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ActorAddEffectEvent& actorEffectAddedEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ActorBeforeHealEvent& actorHealEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ActorBeforeHurtEvent& actorHurtEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::ActorBeforeAcquireItemEvent& actorAquireItemEvent);

    MCAPI ::HandlerResult $handleEvent(::ActorRemovedEvent const& actorRemovedEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
