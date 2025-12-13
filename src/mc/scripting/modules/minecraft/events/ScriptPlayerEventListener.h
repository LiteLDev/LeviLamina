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
struct PlayerSwingStartEvent;
struct PlayerUseNameTagEvent;
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

    MCNAPI ::EventResult $onEvent(::PlayerUseNameTagEvent const& nameTagEvent);

    MCNAPI ::EventResult $onEvent(::PlayerSwingStartEvent const& e);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
