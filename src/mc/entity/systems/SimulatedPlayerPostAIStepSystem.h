#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SimulatedPlayerPostAIStepSystem {
public:
    // prevent constructor by default
    SimulatedPlayerPostAIStepSystem& operator=(SimulatedPlayerPostAIStepSystem const&);
    SimulatedPlayerPostAIStepSystem(SimulatedPlayerPostAIStepSystem const&);
    SimulatedPlayerPostAIStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@SimulatedPlayerPostAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doSimulatedPlayerPostAIStepSystem@SimulatedPlayerPostAIStepSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _doSimulatedPlayerPostAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

    // symbol:
    // ?_tickSimulatedPlayerPostAIStepSystem@SimulatedPlayerPostAIStepSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@USimulatedPlayerFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void _tickSimulatedPlayerPostAIStepSystem(class ViewT<
                                                           class StrictEntityContext,
                                                           struct Include<
                                                               class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                               class FlagComponent<struct SimulatedPlayerFlag>>,
                                                           class ActorOwnerComponent> view);

    // NOLINTEND
};
