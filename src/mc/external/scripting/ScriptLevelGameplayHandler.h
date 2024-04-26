#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/common/wrapper/HandlerResult.h"
#include "mc/events/LevelGameplayEvent.h"
#include "mc/events/MutableLevelGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptLevelGameplayHandler {
public:
    // prevent constructor by default
    ScriptLevelGameplayHandler& operator=(ScriptLevelGameplayHandler const&);
    ScriptLevelGameplayHandler(ScriptLevelGameplayHandler const&);
    ScriptLevelGameplayHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptLevelGameplayHandler@@UEAA@XZ
    virtual ~ScriptLevelGameplayHandler() = default;

    // vIndex: 1, symbol:
    // ?handleEvent@ScriptLevelGameplayHandler@@UEAA?AW4HandlerResult@@AEBUScriptingInitializeEvent@@@Z
    virtual ::HandlerResult handleEvent(struct ScriptingInitializeEvent const&);

    // vIndex: 2, symbol:
    // ?handleEvent@ScriptLevelGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAULevelWeatherChangedEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct LevelWeatherChangedEvent&);

    // vIndex: 3, symbol:
    // ?handleEvent@?$Impl@U?$type_list@$$CBU?$LevelGameplayEvent@X@@U?$MutableLevelGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VLevelGameplayHandler@@@Details@@MEAA?AW4HandlerResult@@AEBU?$LevelGameplayEvent@X@@@Z
    virtual ::HandlerResult handleEvent(struct LevelGameplayEvent<void> const&);

    // vIndex: 4, symbol:
    // ?handleEvent@?$Impl@U?$type_list@U?$MutableLevelGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VLevelGameplayHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAU?$MutableLevelGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableLevelGameplayEvent<::CoordinatorResult>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleScriptingInitializeEvent@ScriptLevelGameplayHandler@@AEBA_NAEBUScriptingInitializeEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleScriptingInitializeEvent(struct ScriptingInitializeEvent const&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // symbol:
    // ?_handleWeatherChangedEvent@ScriptLevelGameplayHandler@@AEBA_NAEAULevelWeatherChangedEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleWeatherChangedEvent(struct LevelWeatherChangedEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // NOLINTEND
};
