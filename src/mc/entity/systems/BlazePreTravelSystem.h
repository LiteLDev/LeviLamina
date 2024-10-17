#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class BlazePreTravelSystem {
public:
    // prevent constructor by default
    BlazePreTravelSystem& operator=(BlazePreTravelSystem const&);
    BlazePreTravelSystem(BlazePreTravelSystem const&);
    BlazePreTravelSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _doBlazePreTravelSystem(class StrictEntityContext const&, class ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void _tickBlazePreTravelSystem(class ViewT<
                                                class StrictEntityContext,
                                                struct Include<
                                                    class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                    class FlagComponent<struct BlazeFlag>>,
                                                class ActorOwnerComponent> view);

    // NOLINTEND
};
