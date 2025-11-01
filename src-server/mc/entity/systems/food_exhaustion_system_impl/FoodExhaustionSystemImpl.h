#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct AttributeRequestComponent;
struct ExhaustionComponent;
struct GetAttachPositionViews;
struct OnGroundFlagComponent;
struct ServerPlayerCurrentMovementComponent;
struct StateVectorComponent;
struct WasInWaterFlagComponent;
// clang-format on

namespace FoodExhaustionSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void doFoodExhaustion(::StrictEntityContext const& entity, ::Optional<::OnGroundFlagComponent const> onGround, ::Optional<::WasInWaterFlagComponent const> wasInWater, ::ExhaustionComponent const& exhaustion, ::ActorGameTypeComponent const& playerGameType, ::ServerPlayerCurrentMovementComponent const& serverPlayerCurrentMovementComponent, ::StateVectorComponent const& stateVectorComponent, ::ActorDataFlagComponent const& actorData, ::GetAttachPositionViews const& views, ::EntityModifier<::AttributeRequestComponent> modifier, ::GameType defaultGameType, ::IConstBlockSource const& region);
// NOLINTEND

}
