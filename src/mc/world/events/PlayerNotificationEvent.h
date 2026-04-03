#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventVariantImpl.h"

// auto generated forward declare list
// clang-format off
struct PlayerAddEvent;
struct PlayerAddExpEvent;
struct PlayerAddLevelEvent;
struct PlayerArmorExchangeEvent;
struct PlayerCloseContainerEvent;
struct PlayerDamageEvent;
struct PlayerDataDrivenScreenClosedEvent;
struct PlayerDestroyBlockEvent;
struct PlayerDimensionChangeAfterEvent;
struct PlayerDimensionChangeBeforeEvent;
struct PlayerDisconnectEvent;
struct PlayerDropItemEvent;
struct PlayerEatFoodEvent;
struct PlayerEmoteEvent;
struct PlayerFormCloseEvent;
struct PlayerFormResponseEvent;
struct PlayerGameModeChangeEvent;
struct PlayerGetExperienceOrbEvent;
struct PlayerHasInvalidContainerEvent;
struct PlayerHotbarSelectedSlotChangeEvent;
struct PlayerInitialSpawnEvent;
struct PlayerInputModeChangeEvent;
struct PlayerInputPermissionCategoryChangeEvent;
struct PlayerInteractEvent;
struct PlayerInteractWithBlockAfterEvent;
struct PlayerInteractWithBlockBeforeEvent;
struct PlayerInteractWithEntityAfterEvent;
struct PlayerInteractWithEntityBeforeEvent;
struct PlayerInventoryItemChangeEvent;
struct PlayerOpenContainerEvent;
struct PlayerRespawnEvent;
struct PlayerSayCommandEvent;
struct PlayerScriptInputEvent;
struct PlayerSelectedItemChangedEvent;
struct PlayerShootArrowEvent;
struct PlayerSkinLoadedClientEvent;
struct PlayerSleepStateChangeEvent;
struct PlayerStopLoadingEvent;
struct PlayerSwingStartEvent;
struct PlayerUpdateInteractionEvent;
struct PlayerUseNameTagEvent;
// clang-format on

struct PlayerNotificationEvent : public ::EventVariantImpl<
                                     ::PlayerSkinLoadedClientEvent const,
                                     ::PlayerAddEvent const,
                                     ::PlayerAddExpEvent const,
                                     ::PlayerAddLevelEvent const,
                                     ::PlayerArmorExchangeEvent const,
                                     ::PlayerDestroyBlockEvent const,
                                     ::PlayerUseNameTagEvent const,
                                     ::PlayerDropItemEvent const,
                                     ::PlayerEatFoodEvent const,
                                     ::PlayerDamageEvent const,
                                     ::PlayerDisconnectEvent const,
                                     ::PlayerFormCloseEvent const,
                                     ::PlayerFormResponseEvent const,
                                     ::PlayerDataDrivenScreenClosedEvent const,
                                     ::PlayerInputModeChangeEvent const,
                                     ::PlayerInitialSpawnEvent const,
                                     ::PlayerOpenContainerEvent const,
                                     ::PlayerCloseContainerEvent const,
                                     ::PlayerHasInvalidContainerEvent const,
                                     ::PlayerShootArrowEvent const,
                                     ::PlayerSwingStartEvent const,
                                     ::PlayerRespawnEvent const,
                                     ::PlayerSleepStateChangeEvent const,
                                     ::PlayerStopLoadingEvent const,
                                     ::PlayerUpdateInteractionEvent const,
                                     ::PlayerSelectedItemChangedEvent const,
                                     ::PlayerDimensionChangeBeforeEvent const,
                                     ::PlayerDimensionChangeAfterEvent const,
                                     ::PlayerInteractWithEntityAfterEvent const,
                                     ::PlayerInteractWithBlockAfterEvent const,
                                     ::PlayerEmoteEvent const,
                                     ::PlayerScriptInputEvent const,
                                     ::PlayerInventoryItemChangeEvent const,
                                     ::PlayerHotbarSelectedSlotChangeEvent const,
                                     ::PlayerInputPermissionCategoryChangeEvent const,
                                     ::PlayerSayCommandEvent const,
                                     ::PlayerGetExperienceOrbEvent const,
                                     ::PlayerInteractEvent const,
                                     ::PlayerInteractWithEntityBeforeEvent const,
                                     ::PlayerInteractWithBlockBeforeEvent const,
                                     ::PlayerGameModeChangeEvent const> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerNotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
