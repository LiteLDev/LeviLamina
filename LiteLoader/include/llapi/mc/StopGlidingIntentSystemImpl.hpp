/**
 * @file  StopGlidingIntentSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace StopGlidingIntentSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?doStopGlidingIntent\@StopGlidingIntentSystemImpl\@\@YAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBV?$FlagComponent\@UArmorFlyEnabledFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@\@\@AEBUAABBShapeComponent\@\@AEBUAbilitiesComponent\@\@AEBUFallFlyTicksComponent\@\@AEBUMoveInputComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUVanillaClientGameplayComponent\@\@AEAUPlayerActionComponent\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void doStopGlidingIntent(class StrictEntityContext const &, class Optional<class FlagComponent<struct ArmorFlyEnabledFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, struct AABBShapeComponent const &, struct AbilitiesComponent const &, struct FallFlyTicksComponent const &, struct MoveInputComponent const &, struct StateVectorComponent const &, struct SynchedActorDataComponent const &, struct VanillaClientGameplayComponent const &, struct PlayerActionComponent &, class IConstBlockSource const &);

};