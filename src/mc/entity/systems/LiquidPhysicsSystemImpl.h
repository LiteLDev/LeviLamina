#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MaterialType.h"

class LiquidPhysicsSystemImpl {
public:
    // prevent constructor by default
    LiquidPhysicsSystemImpl& operator=(LiquidPhysicsSystemImpl const&);
    LiquidPhysicsSystemImpl(LiquidPhysicsSystemImpl const&);
    LiquidPhysicsSystemImpl();

public:
    // NOLINTBEGIN
    MCAPI static void _applyFlow(struct StateVectorComponent&, class Vec3, ::MaterialType);

    MCAPI static bool _hasAdjacentFlowingBlock(
        std::vector<struct LiquidBlockEntry> const&,
        class IConstBlockSource const& region,
        ::MaterialType                 liquidType
    );

    MCAPI static bool _hasFlowingBlock(std::vector<struct LiquidBlockEntry> const&);

    // NOLINTEND
};
