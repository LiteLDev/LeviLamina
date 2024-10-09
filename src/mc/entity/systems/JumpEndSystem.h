#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class JumpEndSystem {
public:
    // prevent constructor by default
    JumpEndSystem& operator=(JumpEndSystem const&);
    JumpEndSystem(JumpEndSystem const&);
    JumpEndSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void tick(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            class Optional<struct VehicleComponent const>,
            struct StateVectorComponent const,
            struct ActorDataDirtyFlagsComponent,
            struct ActorDataJumpDurationComponent,
            struct JumpTicksComponent,
            struct MobJumpComponent> view,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ParrotFlag>>,
            struct PassengerComponent const> parrotPassengersView,
        class EntityModifier<
            class FlagComponent<struct ExitFromPassengerFlag>,
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct MobIsJumpingFlag>> mod
    );

    // NOLINTEND
};
