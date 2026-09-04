#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/DoorBlock.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CopperDoorBlock : public ::CopperBlock<::DoorBlock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _useDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_useDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
