#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

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
    MCAPI static void _doBlazePreTravelSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

    MCAPI static void _tickBlazePreTravelSystem(class ViewT<
                                                class StrictEntityContext,
                                                struct Include<
                                                    class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                    class FlagComponent<struct BlazeFlag>>,
                                                class ActorOwnerComponent> view);

    // NOLINTEND
};
