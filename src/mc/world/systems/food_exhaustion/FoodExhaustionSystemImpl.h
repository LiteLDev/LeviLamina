#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
// clang-format on

namespace FoodExhaustionSystemImpl {
/**
 * @symbol
 * ?doFoodExhaustion\@FoodExhaustionSystemImpl\@\@YAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@AEAUAttributesComponent\@\@AEBVExhaustionComponent\@\@AEBUActorGameTypeComponent\@\@AEBUServerPlayerCurrentMovementComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUGetAttachPositionViews\@\@W4GameType\@\@AEBVIConstBlockSource\@\@\@Z
 */
MCAPI void doFoodExhaustion(class StrictEntityContext const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, struct AttributesComponent&, class ExhaustionComponent const&, struct ActorGameTypeComponent const&, struct ServerPlayerCurrentMovementComponent const&, struct StateVectorComponent const&, struct SynchedActorDataComponent const&, struct GetAttachPositionViews const&, enum class GameType, class IConstBlockSource const&);

}; // namespace FoodExhaustionSystemImpl
