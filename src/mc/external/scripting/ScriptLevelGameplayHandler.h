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
    // vIndex: 0
    virtual ~ScriptLevelGameplayHandler() = default;

    // vIndex: 1
    virtual ::HandlerResult handleEvent(struct ScriptingInitializeEvent const&);

    // vIndex: 2
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct LevelWeatherChangedEvent&);

    // vIndex: 3
    virtual ::HandlerResult handleEvent(struct LevelGameplayEvent<void> const&);

    // vIndex: 4
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableLevelGameplayEvent<::CoordinatorResult>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _handleScriptingInitializeEvent(struct ScriptingInitializeEvent const&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    MCAPI bool
    _handleWeatherChangedEvent(struct LevelWeatherChangedEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // NOLINTEND
};
