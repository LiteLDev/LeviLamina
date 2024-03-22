#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class CurrentSwimAmountSystem {
public:
    // prevent constructor by default
    CurrentSwimAmountSystem& operator=(CurrentSwimAmountSystem const&);
    CurrentSwimAmountSystem(CurrentSwimAmountSystem const&);
    CurrentSwimAmountSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@CurrentSwimAmountSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?tick@CurrentSwimAmountSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@USwimAmountComponent@@$$CBUActorDataFlagComponent@@@@@Z
    MCAPI static void tick(class ViewT<
                           class StrictEntityContext,
                           struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                           struct SwimAmountComponent,
                           struct ActorDataFlagComponent const> view);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doCurrentSwimAmountSystem@CurrentSwimAmountSystem@@CAXAEBVStrictEntityContext@@AEAUSwimAmountComponent@@AEBUActorDataFlagComponent@@@Z
    MCAPI static void
    _doCurrentSwimAmountSystem(class StrictEntityContext const&, struct SwimAmountComponent&, struct ActorDataFlagComponent const&);

    // NOLINTEND
};
