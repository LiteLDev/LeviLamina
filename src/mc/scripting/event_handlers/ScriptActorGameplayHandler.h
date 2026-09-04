#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
};
