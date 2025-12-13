#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/DoorBlock.h"

// auto generated forward declare list
// clang-format off
class Experiments;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CopperDoorBlock : public ::CopperBlock<::DoorBlock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _useDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    virtual ~CopperDoorBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_useDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
