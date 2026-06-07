#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Material;
struct ResourceDropsContext;
// clang-format on

class RotatedPillarInfestedBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    RotatedPillarInfestedBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void spawnAfterBreak(
        ::BlockSource&    region,
        ::Block const&    pos,
        ::BlockPos const& resourceDropsContext,
        ::ResourceDropsContext const&
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RotatedPillarInfestedBlock(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $spawnAfterBreak(
        ::BlockSource&    region,
        ::Block const&    pos,
        ::BlockPos const& resourceDropsContext,
        ::ResourceDropsContext const&
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
