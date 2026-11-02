#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseRailBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class PoweredRailBlock : public ::BaseRailBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getVariant(::Block const& block) const /*override*/;

    virtual void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI void $_onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
