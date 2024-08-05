#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

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
        struct MobAnimationComponent&,
        struct MobBodyRotationComponent const& bodyRot,
        struct MobHurtTimeComponent const&,
        struct ActorWalkAnimationComponent&,
        struct StateVectorComponent const&,
        struct ActorDataFlagComponent const&,
        class Optional<class FlagComponent<struct BlazeFlag> const>,
        class Optional<class FlagComponent<struct LavaSlimeFlag> const>,
        class Optional<struct OnFireComponent const>,
        class Optional<struct PassengerComponent const>,
        class Optional<class FlagComponent<struct MobIsJumpingFlag> const> isJumping
    );

    // NOLINTEND
};
