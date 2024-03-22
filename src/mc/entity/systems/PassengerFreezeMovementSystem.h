#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class PassengerFreezeMovementSystem {
public:
    // prevent constructor by default
    PassengerFreezeMovementSystem& operator=(PassengerFreezeMovementSystem const&);
    PassengerFreezeMovementSystem(PassengerFreezeMovementSystem const&);
    PassengerFreezeMovementSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PassengerFreezeMovementSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol: ?freezeMovement@PassengerFreezeMovementSystem@@SAXAEAVStrictEntityContext@@AEAUStateVectorComponent@@@Z
    MCAPI static void freezeMovement(class StrictEntityContext&, struct StateVectorComponent&);

    // symbol:
    // ?tickPassengerFreezeMovementSystem@PassengerFreezeMovementSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@UPassengerComponent@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@UStateVectorComponent@@@@@Z
    MCAPI static void tickPassengerFreezeMovementSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<struct PassengerComponent, class FlagComponent<struct ActorMovementTickNeededFlag>>,
            struct StateVectorComponent> view
    );

    // NOLINTEND
};
