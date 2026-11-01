#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/scripting/modules/minecraft/events/ScriptActorContainerAccessAfterEventIntermediateData.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockContainerAccessAfterEventIntermediateData.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class Player;
struct PlayerClosedContainerEvent;
struct PlayerCraftRecipeAfterEvent;
struct PlayerCursorItemGrabEvent;
struct PlayerCursorItemReleaseEvent;
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
struct PlayerOpenedContainerEvent;
struct PlayerRespawnEvent;
struct PlayerScriptInputEvent;
struct PlayerSwingStartEvent;
struct PlayerUseNameTagEvent;
namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils { struct Listener; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerGlobalEventListener : public ::EventListenerDispatcher<::PlayerEventListener> {
public:
    // ScriptPlayerGlobalEventListener inner types define
    using ContainerCloseContext = ::std::variant<
        ::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData,
        ::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>>
        mListeners;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::ActorUniqueID,
            ::std::variant<
                ::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData,
                ::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>>>
        mContainerCloseContextDataMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::PlayerRespawnEvent const& respawnEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerInitialSpawnEvent const& initialSpawnEvent) /*override*/;

    virtual ::EventResult
    onEvent(::PlayerInteractWithEntityAfterEvent const& playerInteractWithEntityEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerInventoryItemChangeEvent const& e) /*override*/;

    virtual ::EventResult onEvent(::PlayerCursorItemGrabEvent const& e) /*override*/;

    virtual ::EventResult onEvent(::PlayerCursorItemReleaseEvent const& e) /*override*/;

    virtual ::EventResult onEvent(::PlayerSwingStartEvent const& e) /*override*/;

    virtual ::EventResult onEvent(::PlayerUseNameTagEvent const& nameTagEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerHotbarSelectedSlotChangeEvent const& e) /*override*/;

    virtual ::EventResult onEvent(::PlayerInputModeChangeEvent const& playerInputModeChangeEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerInputPermissionCategoryChangeEvent const& event) /*override*/;

    virtual ::EventResult onEvent(::PlayerInteractWithBlockAfterEvent const& playerInteractWithBlockEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerScriptInputEvent const& e) /*override*/;

    virtual ::EventResult onEvent(::PlayerDimensionChangeAfterEvent const& playerDimensionChangeEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerEmoteEvent const& playerEmoteEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerGameModeChangeEvent const& playerGameModeChangeEvent) /*override*/;

    virtual ::EventResult onEvent(::PlayerOpenedContainerEvent const& e) /*override*/;

    virtual ::EventResult onEvent(::PlayerClosedContainerEvent const& e) /*override*/;

    virtual ::EventResult onEvent(::PlayerCraftRecipeAfterEvent const& e) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void flushContainerCloseContext(::Player const& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::PlayerRespawnEvent const& respawnEvent);

    MCNAPI ::EventResult $onEvent(::PlayerInitialSpawnEvent const& initialSpawnEvent);

    MCNAPI ::EventResult $onEvent(::PlayerInteractWithEntityAfterEvent const& playerInteractWithEntityEvent);

    MCNAPI ::EventResult $onEvent(::PlayerInventoryItemChangeEvent const& e);

    MCNAPI ::EventResult $onEvent(::PlayerCursorItemGrabEvent const& e);

    MCNAPI ::EventResult $onEvent(::PlayerCursorItemReleaseEvent const& e);

    MCNAPI ::EventResult $onEvent(::PlayerSwingStartEvent const& e);

    MCNAPI ::EventResult $onEvent(::PlayerUseNameTagEvent const& nameTagEvent);

    MCNAPI ::EventResult $onEvent(::PlayerHotbarSelectedSlotChangeEvent const& e);

    MCNAPI ::EventResult $onEvent(::PlayerInputModeChangeEvent const& playerInputModeChangeEvent);

    MCNAPI ::EventResult $onEvent(::PlayerInputPermissionCategoryChangeEvent const& event);

    MCNAPI ::EventResult $onEvent(::PlayerInteractWithBlockAfterEvent const& playerInteractWithBlockEvent);

    MCNAPI ::EventResult $onEvent(::PlayerScriptInputEvent const& e);

    MCNAPI ::EventResult $onEvent(::PlayerDimensionChangeAfterEvent const& playerDimensionChangeEvent);

    MCNAPI ::EventResult $onEvent(::PlayerEmoteEvent const& playerEmoteEvent);

    MCNAPI ::EventResult $onEvent(::PlayerGameModeChangeEvent const& playerGameModeChangeEvent);

    MCNAPI ::EventResult $onEvent(::PlayerOpenedContainerEvent const& e);

    MCNAPI ::EventResult $onEvent(::PlayerClosedContainerEvent const& e);

    MCNAPI ::EventResult $onEvent(::PlayerCraftRecipeAfterEvent const& e);


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
