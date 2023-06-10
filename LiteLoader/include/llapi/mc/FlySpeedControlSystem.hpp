/**
 * @file  FlySpeedControlSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace FlySpeedControlSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?createSystem\@FlySpeedControlSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?doFlySpeedControlSystem\@FlySpeedControlSystem\@\@YAXAEBVStrictEntityContext\@\@AEBUAbilitiesComponent\@\@AEBUMoveInputComponent\@\@AEBUActorGameTypeComponent\@\@AEAUFrictionModifierComponent\@\@AEAUStateVectorComponent\@\@AEBUExternalDataInterface\@\@\@Z
     */
    MCAPI void doFlySpeedControlSystem(class StrictEntityContext const &, struct AbilitiesComponent const &, struct MoveInputComponent const &, struct ActorGameTypeComponent const &, struct FrictionModifierComponent &, struct StateVectorComponent &, struct ExternalDataInterface const &);

};