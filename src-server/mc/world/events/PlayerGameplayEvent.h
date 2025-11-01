#pragma once
#include "mc/_HeaderOutputPredefine.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventVariantImpl.h"
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

template <typename Return>
struct PlayerGameplayEvent;

template<>
struct PlayerGameplayEvent<void> : ConstEventVariant<
                                       PlayerSkinLoadedClientEvent,
                                       PlayerAddEvent,
                                       PlayerAddExpEvent,
                                       PlayerAddLevelEvent,
                                       PlayerArmorExchangeEvent,
                                       PlayerDestroyBlockEvent,
                                       PlayerUseNameTagEvent,
                                       PlayerDropItemEvent,
                                       PlayerEatFoodEvent,
                                       PlayerDamageEvent,
                                       PlayerDisconnectEvent,
                                       PlayerFormCloseEvent,
                                       PlayerFormResponseEvent,
                                       PlayerInputModeChangeEvent,
                                       PlayerInitialSpawnEvent,
                                       PlayerOpenContainerEvent,
                                       PlayerShootArrowEvent,
                                       PlayerRespawnEvent,
                                       PlayerStopLoadingEvent,
                                       PlayerUpdateInteractionEvent,
                                       PlayerSelectedItemChangedEvent,
                                       PlayerDimensionChangeBeforeEvent,
                                       PlayerDimensionChangeAfterEvent,
                                       PlayerInteractWithEntityAfterEvent,
                                       PlayerInteractWithBlockAfterEvent,
                                       PlayerEmoteEvent,
                                       PlayerScriptInputEvent,
                                       PlayerInputPermissionCategoryChangeEvent> {};

template <>
struct PlayerGameplayEvent<CoordinatorResult> : ConstEventVariant<
                                                    PlayerSayCommandEvent,
                                                    PlayerGetExperienceOrbEvent,
                                                    PlayerInteractEvent,
                                                    PlayerInteractWithEntityBeforeEvent,
                                                    PlayerInteractWithBlockBeforeEvent> {
};
