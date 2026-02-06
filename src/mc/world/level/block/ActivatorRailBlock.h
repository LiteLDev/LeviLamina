#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseRailBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class ActivatorRailBlock : public ::BaseRailBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getVariant(::Block const& block) const /*override*/;

    virtual void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const /*override*/;

    virtual ~ActivatorRailBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getVariant(::Block const& block) const;

    MCAPI void $_onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
