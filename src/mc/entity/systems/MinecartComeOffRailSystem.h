#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
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
    // ?_minecartComeOffRailSystem@MinecartComeOffRailSystem@@SAXAEAVStrictEntityContext@@AEBVRailMovementComponent@@AEAUStateVectorComponent@@V?$Optional@$$CBUOnGroundFlagComponent@@@@V?$EntityModifier@UMoveRequestComponent@@@@@Z
    MCAPI static void
    _minecartComeOffRailSystem(class StrictEntityContext&, class RailMovementComponent const&, struct StateVectorComponent&, class Optional<struct OnGroundFlagComponent const>, class EntityModifier<struct MoveRequestComponent>);

    // symbol: ?createSystem@MinecartComeOffRailSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tickMinecartComeOffRailSystem@MinecartComeOffRailSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Exclude@USnapOnRailComponent@@@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBVRailMovementComponent@@UStateVectorComponent@@V?$Optional@$$CBUOnGroundFlagComponent@@@@@@V?$EntityModifier@UMoveRequestComponent@@@@@Z
    MCAPI static void _tickMinecartComeOffRailSystem(
        class ViewT<
            class StrictEntityContext,
            struct Exclude<struct SnapOnRailComponent>,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            class RailMovementComponent const,
            struct StateVectorComponent,
            class Optional<struct OnGroundFlagComponent const>> view,
        class EntityModifier<struct MoveRequestComponent>       mod
    );

    // NOLINTEND
};
