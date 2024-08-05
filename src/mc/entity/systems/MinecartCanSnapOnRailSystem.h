#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

class MinecartCanSnapOnRailSystem {
public:
    // prevent constructor by default
    MinecartCanSnapOnRailSystem& operator=(MinecartCanSnapOnRailSystem const&);
    MinecartCanSnapOnRailSystem(MinecartCanSnapOnRailSystem const&);
    MinecartCanSnapOnRailSystem();

public:
    // NOLINTBEGIN
    MCAPI static void
    _checkCanSnapOnRail(class StrictEntityContext const& context, struct StateVectorComponent const&, class EntityModifier<struct SnapOnRailComponent> mod, class IConstBlockSource const&);

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
