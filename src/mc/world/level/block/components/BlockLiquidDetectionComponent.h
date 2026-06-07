#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/block/DetectionRule.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
// clang-format on

struct BlockLiquidDetectionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 5, ::SharedTypes::v1_26_0::DetectionRule> mWaterDetectionRule;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canBeDestroyedByLiquidSpread(::Block const& block);

    MCAPI static bool canContainLiquid(::Block const& block);

    MCAPI static bool isLiquidBlocking(::Block const& block);

    MCAPI static bool liquidCanFlowIntoFromDirection(
        ::Block const&                                            block,
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    );

    MCAPI static bool liquidClipsAgainstCollider(::Block const& block);

    MCAPI static bool liquidSpreadCausesSpawn(::Block const& block);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::set<::SharedTypes::v1_26_0::LiquidType> const& supportedLiquids();
    // NOLINTEND
};
