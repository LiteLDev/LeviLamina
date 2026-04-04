#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class INeighborAwareChunkUpgrader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INeighborAwareChunkUpgrader() = default;

    virtual ::NeighborAwareBlockUpdateType
    getUpdateType(::Block const& block, ::NeighborAwareBlockUpgradeVersionType neighborAwareUpgradeVersion) const = 0;

    virtual void doLevelChunkNeighborAwareUpgrade(
        ::NeighborAwareBlockUpdateType updateType,
        ::BlockSource&                 region,
        ::Block const&                 block,
        ::BlockPos const&              blockPos
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
