#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
struct ResourceDropsContext;
// clang-format on

class RotatedPillarInfestedBlock : public ::RotatedPillarBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 90
    virtual void spawnAfterBreak(::BlockSource& region, ::Block const&, ::BlockPos const& pos, ::ResourceDropsContext const& resourceDropsContext) const /*override*/;

    // vIndex: 0
    virtual ~RotatedPillarInfestedBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $spawnAfterBreak(::BlockSource& region, ::Block const&, ::BlockPos const& pos, ::ResourceDropsContext const& resourceDropsContext) const;
    // NOLINTEND

};
