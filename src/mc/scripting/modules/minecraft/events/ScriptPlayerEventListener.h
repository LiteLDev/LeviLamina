#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerEventListener : public ::EventListenerDispatcher<::PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2b131e;
    ::ll::UntypedStorage<8, 16> mUnkc53dfc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerEventListener& operator=(ScriptPlayerEventListener const&);
    ScriptPlayerEventListener(ScriptPlayerEventListener const&);
    ScriptPlayerEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 57
    virtual ::EventResult onEvent(::PlayerRespawnEvent const& respawnEvent) /*override*/;

    // vIndex: 60
    virtual ::EventResult onEvent(::PlayerInitialSpawnEvent const& initialSpawnEvent) /*override*/;

    // vIndex: 52
    virtual ::EventResult onEvent(::PlayerDimensionChangeAfterEvent const& playerDimensionChangeEvent) /*override*/;

    // vIndex: 61
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

    // vIndex: 0
    virtual ~ScriptPlayerEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::PlayerRespawnEvent const& respawnEvent);

    MCNAPI ::EventResult $onEvent(::PlayerInitialSpawnEvent const& initialSpawnEvent);

    MCNAPI ::EventResult $onEvent(::PlayerDimensionChangeAfterEvent const& playerDimensionChangeEvent);

    MCNAPI ::EventResult $onEvent(::PlayerInputModeChangeEvent const& playerInputModeChangeEvent);

    MCNAPI ::EventResult $onEvent(::PlayerInputPermissionCategoryChangeEvent const& event);

    MCNAPI ::EventResult $onEvent(::PlayerInteractWithEntityAfterEvent const& playerInteractWithEntityEvent);

    MCNAPI ::EventResult $onEvent(::PlayerInteractWithBlockAfterEvent const& playerInteractWithBlockEvent);

    MCNAPI ::EventResult $onEvent(::PlayerGameModeChangeEvent const& playerGameModeChangeEvent);

    MCNAPI ::EventResult $onEvent(::PlayerEmoteEvent const& playerEmoteEvent);

    MCNAPI ::EventResult $onEvent(::PlayerScriptInputEvent const& e);

    MCNAPI ::EventResult $onEvent(::PlayerInventoryItemChangeEvent const& e);

    MCNAPI ::EventResult $onEvent(::PlayerHotbarSelectedSlotChangeEvent const& e);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
