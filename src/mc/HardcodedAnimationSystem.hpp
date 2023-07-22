/**
 * @file  HardcodedAnimationSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class HardcodedAnimationSystem.
 *
 */
class HardcodedAnimationSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HARDCODEDANIMATIONSYSTEM
public:
    class HardcodedAnimationSystem& operator=(class HardcodedAnimationSystem const &) = delete;
    HardcodedAnimationSystem(class HardcodedAnimationSystem const &) = delete;
    HardcodedAnimationSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@HardcodedAnimationSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?doHardcodedAnimation\@HardcodedAnimationSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUMobAnimationComponent\@\@AEBUMobBodyRotationComponent\@\@AEBUMobHurtTimeComponent\@\@AEAUMobWalkAnimationComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UBlazeFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@ULavaSlimeFlag\@\@\@\@\@\@V?$Optional\@$$CBUOnFireComponent\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void doHardcodedAnimation(class StrictEntityContext const &, struct MobAnimationComponent &, struct MobBodyRotationComponent const &, struct MobHurtTimeComponent const &, struct MobWalkAnimationComponent &, struct StateVectorComponent const &, struct SynchedActorDataComponent const &, class Optional<class FlagComponent<struct BlazeFlag> const>, class Optional<class FlagComponent<struct LavaSlimeFlag> const>, class Optional<struct OnFireComponent const>, class Optional<struct PassengerComponent const>, class Optional<class FlagComponent<struct MobIsJumpingFlag> const>);

private:

};