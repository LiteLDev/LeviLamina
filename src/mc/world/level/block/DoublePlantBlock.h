#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/DoublePlantBaseBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

class DoublePlantBlock : public ::DoublePlantBaseBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 66
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 0
    virtual ~DoublePlantBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool placeAt(::BlockSource& region, ::BlockPos const& pos, int updateType, ::Actor*) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
