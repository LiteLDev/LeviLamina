#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakBlocksComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKSCOMPONENT
public:
    BreakBlocksComponent& operator=(BreakBlocksComponent const&) = delete;
    BreakBlocksComponent(BreakBlocksComponent const&)            = delete;
    BreakBlocksComponent()                                       = delete;
#endif

public:
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
};
