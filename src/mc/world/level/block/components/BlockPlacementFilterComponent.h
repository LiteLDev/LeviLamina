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
    // vIndex: 0
    virtual ~BlockPlacementFilterComponent() = default;

    MCAPI bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
