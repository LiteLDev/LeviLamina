#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class JumpEndSystem {
public:
    // prevent constructor by default
    JumpEndSystem& operator=(JumpEndSystem const&);
    JumpEndSystem(JumpEndSystem const&);
    JumpEndSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void tick(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, class Optional<struct VehicleComponent const>, struct StateVectorComponent const, struct ActorDataDirtyFlagsComponent, struct ActorDataJumpDurationComponent, struct JumpTicksComponent, struct MobJumpComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifier<class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct MobIsJumpingFlag>>);

    // NOLINTEND
};
