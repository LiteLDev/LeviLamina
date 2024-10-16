#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/BlockGameplayEvent.h"
#include "mc/world/events/MutableBlockGameplayEvent.h"

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
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct BlockTryPlaceByPlayerEvent const& eventData);

    // vIndex: 2
    virtual struct GameplayHandlerResult<std::optional<std::string>>
    handleEvent(struct CraftUISetResultNameEvent const&);

    // vIndex: 3
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct ExplosionStartedEvent& explosionStartedEvent);

    // vIndex: 4
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct BlockTryDestroyByPlayerEvent& eventData
    );

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
    MCAPI bool _handleBlockTryDestroyByPlayerEvent(
        struct BlockTryDestroyByPlayerEvent&      eventData,
        class Scripting::WeakLifetimeScope const& scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    ) const;

    MCAPI bool _handleBlockTryPlaceByPlayerEvent(
        struct BlockTryPlaceByPlayerEvent const&  eventData,
        class Scripting::WeakLifetimeScope const& scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    ) const;

    MCAPI bool _handleExplosionStartedEvent(
        struct ExplosionStartedEvent&             explosionStartedEvent,
        class Scripting::WeakLifetimeScope const& scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent$(struct BlockTryPlaceByPlayerEvent const& eventData);

    MCAPI struct GameplayHandlerResult<std::optional<std::string>>
    handleEvent$(struct CraftUISetResultNameEvent const&);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent$(struct ExplosionStartedEvent& explosionStartedEvent);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult> handleEvent$(struct BlockTryDestroyByPlayerEvent& eventData
    );

    MCAPI ::HandlerResult handleEvent$(struct BlockGameplayEvent<void> const&);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent$(struct BlockGameplayEvent<::CoordinatorResult> const&);

    MCAPI struct GameplayHandlerResult<std::optional<std::string>>
    handleEvent$(struct BlockGameplayEvent<std::optional<std::string>> const&);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent$(struct MutableBlockGameplayEvent<::CoordinatorResult>& event);

    // NOLINTEND
};
