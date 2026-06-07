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
    // prevent constructor by default
    ActivatorRailBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getVariant(::Block const& block) const /*override*/;

    virtual void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActivatorRailBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
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
