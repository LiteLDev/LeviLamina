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
    // symbol: ?_applyFlow@LiquidPhysicsSystemImpl@@SAXAEAUStateVectorComponent@@VVec3@@W4MaterialType@@@Z
    MCAPI static void _applyFlow(struct StateVectorComponent&, class Vec3, ::MaterialType);

    // symbol:
    // ?_hasAdjacentFlowingBlock@LiquidPhysicsSystemImpl@@SA_NAEBV?$vector@ULiquidBlockEntry@@V?$allocator@ULiquidBlockEntry@@@std@@@std@@AEBVIConstBlockSource@@W4MaterialType@@@Z
    MCAPI static bool _hasAdjacentFlowingBlock(
        std::vector<struct LiquidBlockEntry> const&,
        class IConstBlockSource const& region,
        ::MaterialType                 liquidType
    );

    // symbol:
    // ?_hasFlowingBlock@LiquidPhysicsSystemImpl@@SA_NAEBV?$vector@ULiquidBlockEntry@@V?$allocator@ULiquidBlockEntry@@@std@@@std@@@Z
    MCAPI static bool _hasFlowingBlock(std::vector<struct LiquidBlockEntry> const&);

    // NOLINTEND
};
