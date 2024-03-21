#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class WitchPreAIStepSystem {
public:
    // prevent constructor by default
    WitchPreAIStepSystem& operator=(WitchPreAIStepSystem const&);
    WitchPreAIStepSystem(WitchPreAIStepSystem const&);
    WitchPreAIStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@WitchPreAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_doWitchPreAIStepSystem@WitchPreAIStepSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _doWitchPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

    // symbol:
    // ?_tickWitchPreAIStepSystem@WitchPreAIStepSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UWitchFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void _tickWitchPreAIStepSystem(class ViewT<
                                                class StrictEntityContext,
                                                struct Include<
                                                    class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                    class FlagComponent<struct WitchFlag>>,
                                                class ActorOwnerComponent> view);

    // NOLINTEND
};
