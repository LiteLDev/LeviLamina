#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ChestBlock.h"
#include "mc/world/level/block/CopperBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Experiments;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class CopperChestBlock : public ::CopperBlock<::ChestBlock> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 17
    virtual void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~CopperChestBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
