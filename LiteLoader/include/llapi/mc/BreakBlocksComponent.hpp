/**
 * @file  BreakBlocksComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakBlocksComponent.
 *
 */
class BreakBlocksComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKSCOMPONENT
public:
    class BreakBlocksComponent& operator=(class BreakBlocksComponent const &) = delete;
    BreakBlocksComponent(class BreakBlocksComponent const &) = delete;
    BreakBlocksComponent() = delete;
#endif

public:
    /**
     * @hash   -1681894932
     * @symbol  ?breakNearbyBlocks\@BreakBlocksComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void breakNearbyBlocks(class Actor &);
    /**
     * @hash   -1844033638
     * @symbol  ?initFromDefinition\@BreakBlocksComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   1471203360
     * @symbol  ?isBreakable\@BreakBlocksComponent\@\@QEBA_NAEAVActor\@\@AEBVBlockLegacy\@\@\@Z
     */
    MCAPI bool isBreakable(class Actor &, class BlockLegacy const &) const;

};