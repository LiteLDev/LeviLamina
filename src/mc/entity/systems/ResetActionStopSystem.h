#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ResetActionStopSystem {
public:
    // prevent constructor by default
    ResetActionStopSystem& operator=(ResetActionStopSystem const&);
    ResetActionStopSystem(ResetActionStopSystem const&);
    ResetActionStopSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createResetActionStopSystem@ResetActionStopSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createResetActionStopSystem();

    // symbol:
    // ?tickResetActionStopSystem@ResetActionStopSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@UActionOrStopComponent@@@@@Z
    MCAPI static void tickResetActionStopSystem(class ViewT<
                                                class StrictEntityContext,
                                                struct Include<
                                                    class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                    class FlagComponent<struct LocalPlayerComponentFlag>>,
                                                struct ActionOrStopComponent> view);

    // NOLINTEND
};
