#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/INeighborAwareChunkUpgrader.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class NeighborAwareChunkUpgrader : public ::INeighborAwareChunkUpgrader {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::NeighborAwareBlockUpdateType getUpdateType(::Block const& block, ::NeighborAwareBlockUpgradeVersionType neighborAwareUpgradeVersion) const /*override*/;

    // vIndex: 2
    virtual void doLevelChunkNeighborAwareUpgrade(::NeighborAwareBlockUpdateType updateType, ::BlockSource& region, ::Block const& block, ::BlockPos const& blockPos) const /*override*/;

    // vIndex: 0
    virtual ~NeighborAwareChunkUpgrader() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::NeighborAwareBlockUpdateType $getUpdateType(::Block const& block, ::NeighborAwareBlockUpgradeVersionType neighborAwareUpgradeVersion) const;

    MCNAPI void $doLevelChunkNeighborAwareUpgrade(::NeighborAwareBlockUpdateType updateType, ::BlockSource& region, ::Block const& block, ::BlockPos const& blockPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
