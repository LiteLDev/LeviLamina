/**
 * @file  SwimControlSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SwimControlSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMCONTROLSYSTEM
public:
    class SwimControlSystem& operator=(class SwimControlSystem const &) = delete;
    SwimControlSystem(class SwimControlSystem const &) = delete;
    SwimControlSystem() = delete;
#endif

public:
    /**
     * @symbol ?create\@SwimControlSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?tick\@SwimControlSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUSynchedActorDataComponent\@\@AEBUAbilitiesComponent\@\@AEBUActorRotationComponent\@\@AEBUMoveInputComponent\@\@AEAUStateVectorComponent\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tick(class StrictEntityContext const &, struct SynchedActorDataComponent const &, struct AbilitiesComponent const &, struct ActorRotationComponent const &, struct MoveInputComponent const &, struct StateVectorComponent &, class IConstBlockSource const &);

};
