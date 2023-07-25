#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

class HardcodedAnimationSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HARDCODEDANIMATIONSYSTEM
public:
    HardcodedAnimationSystem& operator=(HardcodedAnimationSystem const&) = delete;
    HardcodedAnimationSystem(HardcodedAnimationSystem const&)            = delete;
    HardcodedAnimationSystem()                                           = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@HardcodedAnimationSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?doHardcodedAnimation\@HardcodedAnimationSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUMobAnimationComponent\@\@AEBUMobBodyRotationComponent\@\@AEBUMobHurtTimeComponent\@\@AEAUActorWalkAnimationComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UBlazeFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@ULavaSlimeFlag\@\@\@\@\@\@V?$Optional\@$$CBUOnFireComponent\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void doHardcodedAnimation(class StrictEntityContext const&, struct MobAnimationComponent&, struct MobBodyRotationComponent const&, struct MobHurtTimeComponent const&, struct ActorWalkAnimationComponent&, struct StateVectorComponent const&, struct SynchedActorDataComponent const&, class Optional<class FlagComponent<struct BlazeFlag> const>, class Optional<class FlagComponent<struct LavaSlimeFlag> const>, class Optional<struct OnFireComponent const>, class Optional<struct PassengerComponent const>, class Optional<class FlagComponent<struct MobIsJumpingFlag> const>);

private:
};
