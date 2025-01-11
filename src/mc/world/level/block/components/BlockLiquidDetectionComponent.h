#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
// clang-format on

struct BlockLiquidDetectionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 4> mUnkf69ae4;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockLiquidDetectionComponent& operator=(BlockLiquidDetectionComponent const&);
    BlockLiquidDetectionComponent(BlockLiquidDetectionComponent const&);
    BlockLiquidDetectionComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canBeDestroyedByLiquidSpread(::Block const& block);

    MCFOLD static bool canContainLiquid(::Block const& block);

    MCAPI static bool isLiquidBlocking(::Block const& block);

    MCAPI static bool liquidCanFlowIntoFromDirection(
        ::Block const&                                            block,
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    );

    MCAPI static bool liquidSpreadCausesSpawn(::Block const& block);
    // NOLINTEND
};
