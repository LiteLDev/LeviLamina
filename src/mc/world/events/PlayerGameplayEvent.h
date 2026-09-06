#pragma once
#include "mc/_HeaderOutputPredefine.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/PlayerAddEvent.h"
#include "mc/world/events/PlayerAddExpEvent.h"
#include "mc/world/events/PlayerAddLevelEvent.h"
#include "mc/world/events/PlayerArmorExchangeEvent.h"
#include "mc/world/events/PlayerCloseContainerEvent.h"
#include "mc/world/events/PlayerClosedContainerEvent.h"
#include "mc/world/events/PlayerDamageEvent.h"
#include "mc/world/events/PlayerDataDrivenScreenClosedEvent.h"
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
#include "mc/world/events/PlayerHasInvalidContainerEvent.h"
#include "mc/world/events/PlayerHotbarSelectedSlotChangeEvent.h"
#include "mc/world/events/PlayerInitialSpawnEvent.h"
#include "mc/world/events/PlayerInputModeChangeEvent.h"
#include "mc/world/events/PlayerInputPermissionCategoryChangeEvent.h"
#include "mc/world/events/PlayerInteractEvent.h"
#include "mc/world/events/PlayerInteractWithBlockAfterEvent.h"
#include "mc/world/events/PlayerInteractWithBlockBeforeEvent.h"
#include "mc/world/events/PlayerInteractWithEntityAfterEvent.h"
#include "mc/world/events/PlayerInteractWithEntityBeforeEvent.h"
#include "mc/world/events/PlayerInventoryItemChangeEvent.h"
#include "mc/world/events/PlayerOpenContainerEvent.h"
#include "mc/world/events/PlayerOpenedContainerEvent.h"
#include "mc/world/events/PlayerRespawnEvent.h"
#include "mc/world/events/PlayerSayCommandEvent.h"
#include "mc/world/events/PlayerScriptInputEvent.h"
#include "mc/world/events/PlayerSelectedItemChangedEvent.h"
#include "mc/world/events/PlayerShootArrowEvent.h"
#include "mc/world/events/PlayerSkinLoadedClientEvent.h"
#include "mc/world/events/PlayerSleepStateChangeEvent.h"
#include "mc/world/events/PlayerStopLoadingEvent.h"
#include "mc/world/events/PlayerSwingStartEvent.h"
#include "mc/world/events/PlayerTellCommandEvent.h"
#include "mc/world/events/PlayerTellRawCommandEvent.h"
#include "mc/world/events/PlayerTitleCommandEvent.h"
#include "mc/world/events/PlayerTitleRawCommandEvent.h"
#include "mc/world/events/PlayerUpdateInteractionEvent.h"
#include "mc/world/events/PlayerUseNameTagEvent.h"



template <typename Return>
struct PlayerGameplayEvent;

template <>
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
                                       PlayerDataDrivenScreenClosedEvent,
                                       PlayerInputModeChangeEvent,
                                       PlayerInitialSpawnEvent,
                                       PlayerOpenContainerEvent,
                                       PlayerOpenedContainerEvent,
                                       PlayerCloseContainerEvent,
                                       PlayerClosedContainerEvent,
                                       PlayerHasInvalidContainerEvent,
                                       PlayerShootArrowEvent,
                                       PlayerSwingStartEvent,
                                       PlayerRespawnEvent,
                                       PlayerSleepStateChangeEvent,
                                       PlayerStopLoadingEvent,
                                       PlayerUpdateInteractionEvent,
                                       PlayerSelectedItemChangedEvent,
                                       PlayerDimensionChangeBeforeEvent,
                                       PlayerDimensionChangeAfterEvent,
                                       PlayerInteractWithEntityAfterEvent,
                                       PlayerInteractWithBlockAfterEvent,
                                       PlayerEmoteEvent,
                                       PlayerScriptInputEvent,
                                       PlayerInventoryItemChangeEvent,
                                       PlayerHotbarSelectedSlotChangeEvent,
                                       PlayerInputPermissionCategoryChangeEvent> {};

template <>
struct PlayerGameplayEvent<CoordinatorResult> : ConstEventVariant<
                                                    PlayerSayCommandEvent,
                                                    PlayerTellCommandEvent,
                                                    PlayerTellRawCommandEvent,
                                                    PlayerTitleCommandEvent,
                                                    PlayerTitleRawCommandEvent,
                                                    PlayerGetExperienceOrbEvent,
                                                    PlayerInteractEvent,
                                                    PlayerInteractWithEntityBeforeEvent,
                                                    PlayerInteractWithBlockBeforeEvent> {};
