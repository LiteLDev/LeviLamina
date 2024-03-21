#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SimulatedPlayerPreAIStepSystem {
public:
    // prevent constructor by default
    SimulatedPlayerPreAIStepSystem& operator=(SimulatedPlayerPreAIStepSystem const&);
    SimulatedPlayerPreAIStepSystem(SimulatedPlayerPreAIStepSystem const&);
    SimulatedPlayerPreAIStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@SimulatedPlayerPreAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doSimulatedPlayerPreAIStepSystem@SimulatedPlayerPreAIStepSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _doSimulatedPlayerPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

    // symbol:
    // ?_tickSimulatedPlayerPreAIStepSystem@SimulatedPlayerPreAIStepSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@USimulatedPlayerFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void _tickSimulatedPlayerPreAIStepSystem(class ViewT<
                                                          class StrictEntityContext,
                                                          struct Include<
                                                              class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                              class FlagComponent<struct SimulatedPlayerFlag>>,
                                                          class ActorOwnerComponent> view);

    // NOLINTEND
};
