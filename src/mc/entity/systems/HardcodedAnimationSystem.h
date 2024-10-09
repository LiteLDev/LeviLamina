#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/entity/components/FlagComponent.h"

class HardcodedAnimationSystem {
public:
    // prevent constructor by default
    HardcodedAnimationSystem& operator=(HardcodedAnimationSystem const&);
    HardcodedAnimationSystem(HardcodedAnimationSystem const&);
    HardcodedAnimationSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void doHardcodedAnimation(
        class StrictEntityContext const&,
        struct MobAnimationComponent&                                      mobAnim,
        struct MobBodyRotationComponent const&                             bodyRot,
        struct MobHurtTimeComponent const&                                 mobHurtTime,
        struct ActorWalkAnimationComponent&                                mobWalkAnimation,
        struct StateVectorComponent const&                                 stateVector,
        struct ActorDataFlagComponent const&                               syncedActorData,
        class Optional<class FlagComponent<struct BlazeFlag> const>        blaze,
        class Optional<class FlagComponent<struct LavaSlimeFlag> const>    lavaSlime,
        class Optional<struct OnFireComponent const>                       onFire,
        class Optional<struct PassengerComponent const>                    passenger,
        class Optional<class FlagComponent<struct MobIsJumpingFlag> const> isJumping
    );

    // NOLINTEND
};
