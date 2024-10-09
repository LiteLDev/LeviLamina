#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"
#include "mc/world/level/GameType.h"

namespace FoodExhaustionSystemImpl {
// NOLINTBEGIN
MCAPI void doFoodExhaustion(
    class StrictEntityContext const&                              entity,
    class Optional<struct OnGroundFlagComponent const>            onGround,
    class Optional<class FlagComponent<struct InWaterFlag> const> wasInWater,
    class ExhaustionComponent const&                              exhaustion,
    struct ActorGameTypeComponent const&                          playerGameType,
    struct ServerPlayerCurrentMovementComponent const&            serverPlayerCurrentMovementComponent,
    struct StateVectorComponent const&                            stateVectorComponent,
    struct ActorDataFlagComponent const&                          actorData,
    struct GetAttachPositionViews const&                          views,
    class EntityModifier<struct AttributeRequestComponent>        modifier,
    ::GameType                                                    defaultGameType,
    class IConstBlockSource const&                                region
);
// NOLINTEND

}; // namespace FoodExhaustionSystemImpl
