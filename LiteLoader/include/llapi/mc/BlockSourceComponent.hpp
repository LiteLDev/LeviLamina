/**
 * @file  MC/BlockSourceComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockSourceComponent.
 *
 */
class BlockSourceComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCECOMPONENT
public:
    class BlockSourceComponent& operator=(class BlockSourceComponent const &) = delete;
    BlockSourceComponent(class BlockSourceComponent const &) = delete;
    BlockSourceComponent() = delete;
#endif

public:
    /**
     * @hash   -384775655
     * @symbol ??0BlockSourceComponent@@QEAA@AEAVLevel@@AEAVDimension@@AEAVChunkSource@@_N@Z
     */
    MCAPI BlockSourceComponent(class Level &, class Dimension &, class ChunkSource &, bool);
    /**
     * @hash   -817913802
     * @symbol ?tryGetBlockSource@BlockSourceComponent@@QEBA?AV?$StackRefResultT@U?$SharePtrRefTraits@VBlockSource@@@@@@XZ
     */
    MCAPI class StackRefResultT<struct SharePtrRefTraits<class BlockSource>> tryGetBlockSource() const;

};