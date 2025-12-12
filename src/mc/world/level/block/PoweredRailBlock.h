#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseRailBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class PoweredRailBlock : public ::BaseRailBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getVariant(::Block const& block) const /*override*/;

    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const
        /*override*/;

    virtual ~PoweredRailBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getVariant(::Block const& block) const;

    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
