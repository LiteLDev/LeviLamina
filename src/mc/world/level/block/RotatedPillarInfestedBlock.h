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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 91
    virtual void spawnAfterBreak(
        ::BlockSource& region,
        ::Block const&,
        ::BlockPos const&             pos,
        ::ResourceDropsContext const& resourceDropsContext
    ) const /*override*/;

    // vIndex: 0
    virtual ~RotatedPillarInfestedBlock() /*override*/ = default;
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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $spawnAfterBreak(
        ::BlockSource& region,
        ::Block const&,
        ::BlockPos const&             pos,
        ::ResourceDropsContext const& resourceDropsContext
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
