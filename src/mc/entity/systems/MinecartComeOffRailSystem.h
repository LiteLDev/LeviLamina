#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class MinecartComeOffRailSystem {
public:
    // prevent constructor by default
    MinecartComeOffRailSystem& operator=(MinecartComeOffRailSystem const&);
    MinecartComeOffRailSystem(MinecartComeOffRailSystem const&);
    MinecartComeOffRailSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_minecartComeOffRailSystem@MinecartComeOffRailSystem@@SAXAEAVStrictEntityContext@@AEBVRailMovementComponent@@AEAUStateVectorComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$EntityModifier@UMoveRequestComponent@@@@@Z
    MCAPI static void
    _minecartComeOffRailSystem(class StrictEntityContext&, class RailMovementComponent const&, struct StateVectorComponent&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class EntityModifier<struct MoveRequestComponent>);

    // symbol: ?createSystem@MinecartComeOffRailSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
