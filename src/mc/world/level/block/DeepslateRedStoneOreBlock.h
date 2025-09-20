#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RedStoneOreBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ItemInstance;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class DeepslateRedStoneOreBlock : public ::RedStoneOreBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 147
    virtual void _lightUpBlock(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 148
    virtual void _unlightBlock(::BlockEvents::BlockRandomTickEvent& eventData) const /*override*/;

    // vIndex: 0
    virtual ~DeepslateRedStoneOreBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI void $_lightUpBlock(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_unlightBlock(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
