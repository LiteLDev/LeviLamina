#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
struct PlayerDimensionChangeAfterEvent;
struct PlayerEmoteEvent;
struct PlayerGameModeChangeEvent;
struct PlayerHotbarSelectedSlotChangeEvent;
struct PlayerInitialSpawnEvent;
struct PlayerInputModeChangeEvent;
struct PlayerInputPermissionCategoryChangeEvent;
struct PlayerInteractWithBlockAfterEvent;
struct PlayerInteractWithEntityAfterEvent;
struct PlayerInventoryItemChangeEvent;
struct PlayerRespawnEvent;
struct PlayerScriptInputEvent;
struct PlayerSwingStartEvent;
struct PlayerUseNameTagEvent;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerEventListener : public ::EventListenerDispatcher<::PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents>>
        mScriptEventsHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::PlayerRespawnEvent const& respawnEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerInitialSpawnEvent const& initialSpawnEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerDimensionChangeAfterEvent const& playerDimensionChangeEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerInputModeChangeEvent const& playerInputModeChangeEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerInputPermissionCategoryChangeEvent const& event) /*override*/;

    virtual ::EventResult
    onEvent(::PlayerInteractWithEntityAfterEvent const& playerInteractWithEntityEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerInteractWithBlockAfterEvent const& playerInteractWithBlockEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerGameModeChangeEvent const& playerGameModeChangeEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerEmoteEvent const& playerEmoteEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerScriptInputEvent const& e) /*override*/;

    virtual ::EventResult onEvent(::PlayerInventoryItemChangeEvent const& e) /*override*/;

    virtual ::EventResult onEvent(::PlayerHotbarSelectedSlotChangeEvent const& e) /*override*/;

    virtual ::EventResult onEvent(::PlayerUseNameTagEvent const& nameTagEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerSwingStartEvent const& e) /*override*/;

    virtual ~ScriptPlayerEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::PlayerRespawnEvent const& respawnEvent);

    MCAPI ::EventResult $onEvent(::PlayerInitialSpawnEvent const& initialSpawnEvent);

    MCAPI ::EventResult $onEvent(::PlayerDimensionChangeAfterEvent const& playerDimensionChangeEvent);

    MCAPI ::EventResult $onEvent(::PlayerInputModeChangeEvent const& playerInputModeChangeEvent);

    MCAPI ::EventResult $onEvent(::PlayerInputPermissionCategoryChangeEvent const& event);

    MCAPI ::EventResult $onEvent(::PlayerInteractWithEntityAfterEvent const& playerInteractWithEntityEvent);

    MCAPI ::EventResult $onEvent(::PlayerInteractWithBlockAfterEvent const& playerInteractWithBlockEvent);

    MCAPI ::EventResult $onEvent(::PlayerGameModeChangeEvent const& playerGameModeChangeEvent);

    MCAPI ::EventResult $onEvent(::PlayerEmoteEvent const& playerEmoteEvent);

    MCAPI ::EventResult $onEvent(::PlayerScriptInputEvent const& e);

    MCAPI ::EventResult $onEvent(::PlayerInventoryItemChangeEvent const& e);

    MCAPI ::EventResult $onEvent(::PlayerHotbarSelectedSlotChangeEvent const& e);

    MCAPI ::EventResult $onEvent(::PlayerUseNameTagEvent const& nameTagEvent);

    MCAPI ::EventResult $onEvent(::PlayerSwingStartEvent const& e);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
