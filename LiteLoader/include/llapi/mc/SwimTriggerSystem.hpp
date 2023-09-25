/**
 * @file  SwimTriggerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace SwimTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?createSystem\@SwimTriggerSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?doTick\@SwimTriggerSystem\@\@YAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUAbilitiesComponent\@\@AEBUActorRotationComponent\@\@AEBUMoveInputComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUPlayerInputRequestComponent\@\@AEAUPlayerActionComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorHeadInWaterFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void doTick(class StrictEntityContext const &, struct AABBShapeComponent const &, struct AbilitiesComponent const &, struct ActorRotationComponent const &, struct MoveInputComponent const &, struct SynchedActorDataComponent const &, struct PlayerInputRequestComponent const &, struct PlayerActionComponent &, class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class IConstBlockSource const &);

};