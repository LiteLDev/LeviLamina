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
    MCAPI void breakNearbyBlocks(class Actor& actor);

    MCAPI void initFromDefinition(class Actor&);

    MCAPI static bool isBreakable(struct BreakBlocksDescription const* description, class BlockLegacy const& block);

    // NOLINTEND
};
