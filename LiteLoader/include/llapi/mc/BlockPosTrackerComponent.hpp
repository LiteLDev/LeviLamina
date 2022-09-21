/**
 * @file  MC/BlockPosTrackerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockPosTrackerComponent.
 *
 */
class BlockPosTrackerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPOSTRACKERCOMPONENT
public:
    class BlockPosTrackerComponent& operator=(class BlockPosTrackerComponent const &) = delete;
    BlockPosTrackerComponent(class BlockPosTrackerComponent const &) = delete;
    BlockPosTrackerComponent() = delete;
#endif

public:
    /**
     * @hash   693187584
     * @symbol ??0BlockPosTrackerComponent@@QEAA@_NAEBVBlockPos@@@Z
     */
    MCAPI BlockPosTrackerComponent(bool, class BlockPos const &);
    /**
     * @hash   -2056566390
     * @symbol ?onRemove@BlockPosTrackerComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void onRemove(class Actor &);

};