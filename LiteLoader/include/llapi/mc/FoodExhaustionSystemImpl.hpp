/**
 * @file  FoodExhaustionSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace FoodExhaustionSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?doFoodExhaustion\@FoodExhaustionSystemImpl\@\@YAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@AEAUAttributesComponent\@\@AEBVExhaustionComponent\@\@AEBUActorGameTypeComponent\@\@AEBUServerPlayerCurrentMovementComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUGetAttachPositionViews\@\@W4GameType\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void doFoodExhaustion(class StrictEntityContext const &, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, struct AttributesComponent &, class ExhaustionComponent const &, struct ActorGameTypeComponent const &, struct ServerPlayerCurrentMovementComponent const &, struct StateVectorComponent const &, struct SynchedActorDataComponent const &, struct GetAttachPositionViews const &, enum class GameType, class IConstBlockSource const &);

};