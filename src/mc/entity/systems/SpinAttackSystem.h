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
    MCAPI static void _spinAttack(class StrictEntityContext&, class ActorOwnerComponent& actorComponent);

    MCAPI static void _tickSpinAttackSystem(class ViewT<
                                            class StrictEntityContext,
                                            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                            class ActorOwnerComponent> view);

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
