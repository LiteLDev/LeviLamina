#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

struct BlockPlacementFilterComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockPlacementFilterComponent& operator=(BlockPlacementFilterComponent const&);
    BlockPlacementFilterComponent(BlockPlacementFilterComponent const&);
    BlockPlacementFilterComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockPlacementFilterComponent@@UEAA@XZ
    virtual ~BlockPlacementFilterComponent() = default;

    // symbol: ?mayPlace@BlockPlacementFilterComponent@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?mayPlace@BlockPlacementFilterComponent@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // NOLINTEND
};
