#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/ActorInsideBlockEvent.h"
#include "mc/world/events/ActorStandOnBlockEvent.h"
#include "mc/world/events/BlockPatternPostEvent.h"
#include "mc/world/events/BlockPatternPreEvent.h"
#include "mc/world/events/BlockRandomTickEvent.h"
#include "mc/world/events/BlockTryPlaceByPlayerEvent.h"
#include "mc/world/events/ButtonPushEvent.h"
#include "mc/world/events/ChestBlockTryPairEvent.h"
#include "mc/world/events/CraftUISetResultNameEvent.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/LeverActionEvent.h"
#include "mc/world/events/PistonActionEvent.h"
#include "mc/world/events/PressurePlatePopEvent.h"
#include "mc/world/events/PressurePlatePushEvent.h"
#include "mc/world/events/TargetBlockHitEvent.h"
#include "mc/world/events/TripWireTripEvent.h"

template <typename Result>
struct BlockGameplayEvent;

template <>
struct BlockGameplayEvent<void> : ConstEventVariant<BlockPatternPostEvent> {};

template <>
struct BlockGameplayEvent<CoordinatorResult> : ConstEventVariant<
                                                   ActorInsideBlockEvent,     // 0
                                                   ActorStandOnBlockEvent,    // 1
                                                   BlockPatternPreEvent,      // 2
                                                   BlockRandomTickEvent,      // 3
                                                   ChestBlockTryPairEvent,    // 4
                                                   PistonActionEvent,         // 5
                                                   LeverActionEvent,          // 6
                                                   ButtonPushEvent,           // 7
                                                   PressurePlatePushEvent,    // 8
                                                   PressurePlatePopEvent,     // 9
                                                   TargetBlockHitEvent,       // 10
                                                   TripWireTripEvent,         // 11
                                                   BlockTryPlaceByPlayerEvent // 12
                                                   > {};

template <>
struct BlockGameplayEvent<std::optional<std::string>> : ConstEventVariant<CraftUISetResultNameEvent> {};
