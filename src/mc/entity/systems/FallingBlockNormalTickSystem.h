#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class FallingBlockNormalTickSystem {
public:
    // prevent constructor by default
    FallingBlockNormalTickSystem& operator=(FallingBlockNormalTickSystem const&);
    FallingBlockNormalTickSystem(FallingBlockNormalTickSystem const&);
    FallingBlockNormalTickSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@FallingBlockNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doFallingBlockNormalTickSystem@FallingBlockNormalTickSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@AEAVITickDelegate@@@Z
    MCAPI static void
    _doFallingBlockNormalTickSystem(class StrictEntityContext const&, class ActorOwnerComponent&, class ITickDelegate&);

    // symbol:
    // ?_tickFallingBlockNormalTickSystem@FallingBlockNormalTickSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UFallingBlockFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void _tickFallingBlockNormalTickSystem(class ViewT<
                                                        class StrictEntityContext,
                                                        struct Include<
                                                            class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                            class FlagComponent<struct FallingBlockFlag>>,
                                                        class ActorOwnerComponent> view);

    // NOLINTEND
};
