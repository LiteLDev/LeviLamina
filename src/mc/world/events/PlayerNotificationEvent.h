#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/ClientJoinedEvent.h"
#include "mc/world/events/PlayerAddEvent.h"
#include "mc/world/events/PlayerAddExpEvent.h"
#include "mc/world/events/PlayerAddLevelEvent.h"
#include "mc/world/events/PlayerArmorExchangeEvent.h"
#include "mc/world/events/PlayerDamageEvent.h"
#include "mc/world/events/PlayerDestroyBlockEvent.h"
#include "mc/world/events/PlayerDimensionChangeAfterEvent.h"
#include "mc/world/events/PlayerDimensionChangeBeforeEvent.h"
#include "mc/world/events/PlayerDisconnectEvent.h"
#include "mc/world/events/PlayerDropItemEvent.h"
#include "mc/world/events/PlayerEatFoodEvent.h"
#include "mc/world/events/PlayerEmoteEvent.h"
#include "mc/world/events/PlayerFormCloseEvent.h"
#include "mc/world/events/PlayerFormResponseEvent.h"
#include "mc/world/events/PlayerGameModeChangeEvent.h"
#include "mc/world/events/PlayerGetExperienceOrbEvent.h"
#include "mc/world/events/PlayerInitialSpawnEvent.h"
#include "mc/world/events/PlayerInputModeChangeEvent.h"
#include "mc/world/events/PlayerInputPermissionCategoryChangeEvent.h"
#include "mc/world/events/PlayerInteractEvent.h"
#include "mc/world/events/PlayerInteractWithBlockAfterEvent.h"
#include "mc/world/events/PlayerInteractWithBlockBeforeEvent.h"
#include "mc/world/events/PlayerInteractWithEntityAfterEvent.h"
#include "mc/world/events/PlayerInteractWithEntityBeforeEvent.h"
#include "mc/world/events/PlayerOpenContainerEvent.h"
#include "mc/world/events/PlayerRespawnEvent.h"
#include "mc/world/events/PlayerSayCommandEvent.h"
#include "mc/world/events/PlayerScriptInputEvent.h"
#include "mc/world/events/PlayerSelectedItemChangedEvent.h"
#include "mc/world/events/PlayerShootArrowEvent.h"
#include "mc/world/events/PlayerSkinLoadedClientEvent.h"
#include "mc/world/events/PlayerStopLoadingEvent.h"
#include "mc/world/events/PlayerUpdateInteractionEvent.h"
#include "mc/world/events/PlayerUseNameTagEvent.h"

// auto generated inclusion list
#include "mc/world/events/EventVariantImpl.h"

// auto generated forward declare list
// clang-format off
struct ClientJoinedEvent;
struct PlayerAddEvent;
struct PlayerAddExpEvent;
struct PlayerAddLevelEvent;
struct PlayerArmorExchangeEvent;
struct PlayerDamageEvent;
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
struct PlayerInitialSpawnEvent;
struct PlayerInputModeChangeEvent;
struct PlayerInputPermissionCategoryChangeEvent;
struct PlayerInteractEvent;
struct PlayerInteractWithBlockAfterEvent;
struct PlayerInteractWithBlockBeforeEvent;
struct PlayerInteractWithEntityAfterEvent;
struct PlayerInteractWithEntityBeforeEvent;
struct PlayerOpenContainerEvent;
struct PlayerRespawnEvent;
struct PlayerSayCommandEvent;
struct PlayerScriptInputEvent;
struct PlayerSelectedItemChangedEvent;
struct PlayerShootArrowEvent;
struct PlayerSkinLoadedClientEvent;
struct PlayerStopLoadingEvent;
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
                                     ::PlayerInputModeChangeEvent const,
                                     ::PlayerInitialSpawnEvent const,
                                     ::PlayerOpenContainerEvent const,
                                     ::PlayerShootArrowEvent const,
                                     ::PlayerRespawnEvent const,
                                     ::PlayerStopLoadingEvent const,
                                     ::PlayerUpdateInteractionEvent const,
                                     ::PlayerSelectedItemChangedEvent const,
                                     ::PlayerDimensionChangeBeforeEvent const,
                                     ::PlayerDimensionChangeAfterEvent const,
                                     ::PlayerInteractWithEntityAfterEvent const,
                                     ::PlayerInteractWithBlockAfterEvent const,
                                     ::PlayerEmoteEvent const,
                                     ::ClientJoinedEvent const,
                                     ::PlayerScriptInputEvent const,
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
