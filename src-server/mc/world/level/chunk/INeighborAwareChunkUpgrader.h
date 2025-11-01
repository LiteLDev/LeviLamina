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
    // vIndex: 0
    virtual ~INeighborAwareChunkUpgrader() = default;

    // vIndex: 1
    virtual ::NeighborAwareBlockUpdateType
    getUpdateType(::Block const&, ::NeighborAwareBlockUpgradeVersionType) const = 0;

    // vIndex: 2
    virtual void doLevelChunkNeighborAwareUpgrade(
        ::NeighborAwareBlockUpdateType,
        ::BlockSource&,
        ::Block const&,
        ::BlockPos const&
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
