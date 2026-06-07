#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ChestBlock.h"
#include "mc/world/level/block/CopperBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
struct CopperBlockSet;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class CopperChestBlock : public ::CopperBlock<::ChestBlock> {
public:
    // prevent constructor by default
    CopperChestBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CopperChestBlock(::std::string const& nameId, int id, ::CopperBlockSet const& copperSet);

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
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
