#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/common/wrapper/HandlerResult.h"
#include "mc/events/MutableBlockGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/level/block/utils/BlockGameplayEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptBlockGameplayHandler {
public:
    // prevent constructor by default
    ScriptBlockGameplayHandler& operator=(ScriptBlockGameplayHandler const&);
    ScriptBlockGameplayHandler(ScriptBlockGameplayHandler const&);
    ScriptBlockGameplayHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBlockGameplayHandler() = default;

    // vIndex: 1
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct BlockTryPlaceByPlayerEvent const&);

    // vIndex: 2
    virtual struct GameplayHandlerResult<std::optional<std::string>>
    handleEvent(struct CraftUISetResultNameEvent const&);

    // vIndex: 3
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ExplosionStartedEvent&);

    // vIndex: 4
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct BlockTryDestroyByPlayerEvent&);

    // vIndex: 5
    virtual ::HandlerResult handleEvent(struct BlockGameplayEvent<void> const&);

    // vIndex: 6
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct BlockGameplayEvent<::CoordinatorResult> const&);

    // vIndex: 7
    virtual struct GameplayHandlerResult<std::optional<std::string>>
    handleEvent(struct BlockGameplayEvent<std::optional<std::string>> const&);

    // vIndex: 8
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableBlockGameplayEvent<::CoordinatorResult>& event);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _handleBlockTryDestroyByPlayerEvent(struct BlockTryDestroyByPlayerEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    MCAPI bool
    _handleBlockTryPlaceByPlayerEvent(struct BlockTryPlaceByPlayerEvent const&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    MCAPI bool
    _handleExplosionStartedEvent(struct ExplosionStartedEvent&, class Scripting::WeakLifetimeScope const& scope, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // NOLINTEND
};
