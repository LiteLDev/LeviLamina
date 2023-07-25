#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPlacementFilterComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPLACEMENTFILTERCOMPONENT
public:
    BlockPlacementFilterComponent& operator=(BlockPlacementFilterComponent const&) = delete;
    BlockPlacementFilterComponent(BlockPlacementFilterComponent const&)            = delete;
    BlockPlacementFilterComponent()                                                = delete;
#endif

public:
    /**
     * @symbol ?mayPlace\@BlockPlacementFilterComponent\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /**
     * @symbol ?mayPlace\@BlockPlacementFilterComponent\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /**
     * @symbol ??4BlockPlacementFilterComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockPlacementFilterComponent& operator=(struct BlockPlacementFilterComponent&&);
};
