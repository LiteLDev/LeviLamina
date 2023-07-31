#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakBlocksComponent {

public:
    // prevent constructor by default
    BreakBlocksComponent& operator=(BreakBlocksComponent const&) = delete;
    BreakBlocksComponent(BreakBlocksComponent const&)            = delete;
    BreakBlocksComponent()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?breakNearbyBlocks\@BreakBlocksComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void breakNearbyBlocks(class Actor&);
    /**
     * @symbol ?initFromDefinition\@BreakBlocksComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol ?isBreakable\@BreakBlocksComponent\@\@SA_NPEBUBreakBlocksDescription\@\@AEBVBlockLegacy\@\@\@Z
     */
    MCAPI static bool isBreakable(struct BreakBlocksDescription const*, class BlockLegacy const&);
    // NOLINTEND
};
