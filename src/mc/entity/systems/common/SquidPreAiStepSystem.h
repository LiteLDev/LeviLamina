#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SquidPreAiStepSystem {
public:
    // prevent constructor by default
    SquidPreAiStepSystem& operator=(SquidPreAiStepSystem const&);
    SquidPreAiStepSystem(SquidPreAiStepSystem const&);
    SquidPreAiStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@SquidPreAiStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?tick@SquidPreAiStepSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@USquidFlag@@@@@@ULocalMoveVelocityComponent@@@@@Z
    MCAPI static void
    tick(class ViewT<
         class StrictEntityContext,
         struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct SquidFlag>>,
         struct LocalMoveVelocityComponent> view);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doSquidPreAiStepSystem@SquidPreAiStepSystem@@CAXAEBVStrictEntityContext@@AEAULocalMoveVelocityComponent@@@Z
    MCAPI static void _doSquidPreAiStepSystem(class StrictEntityContext const&, struct LocalMoveVelocityComponent&);

    // NOLINTEND
};
