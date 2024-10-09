#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class MinecartComeOffRailSystem {
public:
    // prevent constructor by default
    MinecartComeOffRailSystem& operator=(MinecartComeOffRailSystem const&);
    MinecartComeOffRailSystem(MinecartComeOffRailSystem const&);
    MinecartComeOffRailSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _minecartComeOffRailSystem(
        class StrictEntityContext&                         context,
        class RailMovementComponent const&                 railMovementComponent,
        struct StateVectorComponent&                       stateVectorComponent,
        class Optional<struct OnGroundFlagComponent const> onGroundFlagComponent,
        class EntityModifier<struct MoveRequestComponent>  mod
    );

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
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
