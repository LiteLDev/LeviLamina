/**
 * @file  BlockPlacementFilterComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockPlacementFilterComponent.
 *
 */
struct BlockPlacementFilterComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPLACEMENTFILTERCOMPONENT
public:
    struct BlockPlacementFilterComponent& operator=(struct BlockPlacementFilterComponent const &) = delete;
    BlockPlacementFilterComponent(struct BlockPlacementFilterComponent const &) = delete;
    BlockPlacementFilterComponent() = delete;
#endif

public:
    /**
     * @hash   893805182
     * @symbol ?mayPlace@BlockPlacementFilterComponent@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1516008404
     * @symbol ?mayPlace@BlockPlacementFilterComponent@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -550745398
     * @symbol ??4BlockPlacementFilterComponent@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct BlockPlacementFilterComponent & operator=(struct BlockPlacementFilterComponent &&);
    /**
     * @hash   -2076842135
     * @symbol ??1BlockPlacementFilterComponent@@QEAA@XZ
     */
    MCAPI ~BlockPlacementFilterComponent();

};