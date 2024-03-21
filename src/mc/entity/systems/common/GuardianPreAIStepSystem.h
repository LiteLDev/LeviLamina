#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class GuardianPreAIStepSystem {
public:
    // prevent constructor by default
    GuardianPreAIStepSystem& operator=(GuardianPreAIStepSystem const&);
    GuardianPreAIStepSystem(GuardianPreAIStepSystem const&);
    GuardianPreAIStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@GuardianPreAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doGuardianPreAIStepSystem@GuardianPreAIStepSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _doGuardianPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

    // symbol:
    // ?_tickGuardianPreAIStepSystem@GuardianPreAIStepSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UGuardianFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void _tickGuardianPreAIStepSystem(class ViewT<
                                                   class StrictEntityContext,
                                                   struct Include<
                                                       class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                       class FlagComponent<struct GuardianFlag>>,
                                                   class ActorOwnerComponent> view);

    // NOLINTEND
};
