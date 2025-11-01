#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/TrapDoorBlock.h"

// auto generated forward declare list
// clang-format off
class Experiments;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CopperTrapDoorBlock : public ::CopperBlock<::TrapDoorBlock> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 146
    virtual void _useTrapDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 0
    virtual ~CopperTrapDoorBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_useTrapDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
