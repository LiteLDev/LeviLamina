#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FurnaceBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class ItemInstance;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class SmokerBlock : public ::FurnaceBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
