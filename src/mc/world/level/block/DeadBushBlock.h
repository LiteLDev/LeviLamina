#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class DeadBushBlock : public ::FoliageBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual ~DeadBushBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
