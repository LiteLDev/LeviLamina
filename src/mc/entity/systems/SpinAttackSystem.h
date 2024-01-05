#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SpinAttackSystem {
public:
    // prevent constructor by default
    SpinAttackSystem& operator=(SpinAttackSystem const&);
    SpinAttackSystem(SpinAttackSystem const&);
    SpinAttackSystem();

public:
    // NOLINTBEGIN
    // symbol: ?_spinAttack@SpinAttackSystem@@SAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _spinAttack(class StrictEntityContext&, class ActorOwnerComponent& actorComponent);

    // symbol:
    // ?_tickSpinAttackSystem@SpinAttackSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void _tickSpinAttackSystem(class ViewT<
                                            class StrictEntityContext,
                                            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                            class ActorOwnerComponent> view);

    // symbol: ?createSystem@SpinAttackSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
