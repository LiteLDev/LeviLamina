#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/LightningRodBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
struct CopperBlockSet;
// clang-format on

class CopperLightningRodBlock : public ::CopperBlock<::LightningRodBlock> {
public:
    // prevent constructor by default
    CopperLightningRodBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CopperLightningRodBlock(::std::string const& nameId, int id, ::CopperBlockSet const& copperSet);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::CopperBlockSet const& copperSet);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
