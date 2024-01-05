#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakBlocksComponent {
public:
    // prevent constructor by default
    BreakBlocksComponent& operator=(BreakBlocksComponent const&);
    BreakBlocksComponent(BreakBlocksComponent const&);
    BreakBlocksComponent();

public:
    // NOLINTBEGIN
    // symbol: ?breakNearbyBlocks@BreakBlocksComponent@@QEAAXAEAVActor@@@Z
    MCAPI void breakNearbyBlocks(class Actor& actor);

    // symbol: ?initFromDefinition@BreakBlocksComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor&);

    // symbol: ?isBreakable@BreakBlocksComponent@@SA_NPEBUBreakBlocksDescription@@AEBVBlockLegacy@@@Z
    MCAPI static bool isBreakable(struct BreakBlocksDescription const* description, class BlockLegacy const& block);

    // NOLINTEND
};
