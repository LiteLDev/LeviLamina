#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SeasonsAgnosticLeavesBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class CherryLeavesBlock : public ::SeasonsAgnosticLeavesBlock {
public:
    // prevent constructor by default
    CherryLeavesBlock& operator=(CherryLeavesBlock const&);
    CherryLeavesBlock(CherryLeavesBlock const&);
    CherryLeavesBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 124
    virtual void animateTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~CherryLeavesBlock() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $animateTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
