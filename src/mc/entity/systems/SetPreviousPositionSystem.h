#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SetPreviousPositionSystem {
public:
    // prevent constructor by default
    SetPreviousPositionSystem& operator=(SetPreviousPositionSystem const&);
    SetPreviousPositionSystem(SetPreviousPositionSystem const&);
    SetPreviousPositionSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@SetPreviousPositionSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doSetPreviousPositionSystem@SetPreviousPositionSystem@@CAXAEBVStrictEntityContext@@AEAUStateVectorComponent@@@Z
    MCAPI static void _doSetPreviousPositionSystem(class StrictEntityContext const&, struct StateVectorComponent&);

    // symbol:
    // ?_tickSetPreviousPositionSystem@SetPreviousPositionSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UNeedSetPreviousPosition@@@@@@UStateVectorComponent@@@@@Z
    MCAPI static void _tickSetPreviousPositionSystem(class ViewT<
                                                     class StrictEntityContext,
                                                     struct Include<
                                                         class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                         class FlagComponent<struct NeedSetPreviousPosition>>,
                                                     struct StateVectorComponent> view);

    // NOLINTEND
};
