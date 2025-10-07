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
    // vIndex: 57
    virtual ::EventResult onEvent(::PlayerRespawnEvent const& respawnEvent) /*override*/;

    // vIndex: 62
    virtual ::EventResult onEvent(::PlayerInitialSpawnEvent const& initialSpawnEvent) /*override*/;

    // vIndex: 52
    virtual ::EventResult onEvent(::PlayerDimensionChangeAfterEvent const& playerDimensionChangeEvent) /*override*/;

    // vIndex: 63
    virtual ::EventResult onEvent(::PlayerInputModeChangeEvent const& playerInputModeChangeEvent) /*override*/;

    // vIndex: 45
    virtual ::EventResult onEvent(::PlayerInputPermissionCategoryChangeEvent const& event) /*override*/;

    // vIndex: 51
    virtual ::EventResult
    onEvent(::PlayerInteractWithEntityAfterEvent const& playerInteractWithEntityEvent) /*override*/;

    // vIndex: 50
    virtual ::EventResult onEvent(::PlayerInteractWithBlockAfterEvent const& playerInteractWithBlockEvent) /*override*/;

    // vIndex: 39
    virtual ::EventResult onEvent(::PlayerGameModeChangeEvent const& playerGameModeChangeEvent) /*override*/;

    // vIndex: 49
    virtual ::EventResult onEvent(::PlayerEmoteEvent const& playerEmoteEvent) /*override*/;

    // vIndex: 48
    virtual ::EventResult onEvent(::PlayerScriptInputEvent const& e) /*override*/;

    // vIndex: 47
    virtual ::EventResult onEvent(::PlayerInventoryItemChangeEvent const& e) /*override*/;

    // vIndex: 46
    virtual ::EventResult onEvent(::PlayerHotbarSelectedSlotChangeEvent const& e) /*override*/;

    // vIndex: 58
    virtual ::EventResult onEvent(::PlayerSwingStartEvent const& e) /*override*/;

    // vIndex: 0
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

    MCAPI ::EventResult $onEvent(::PlayerSwingStartEvent const& e);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
