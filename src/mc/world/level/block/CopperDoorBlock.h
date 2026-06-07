#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/DoorBlock.h"

// auto generated forward declare list
// clang-format off
class Material;
struct CopperBlockSet;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CopperDoorBlock : public ::CopperBlock<::DoorBlock> {
public:
    // prevent constructor by default
    CopperDoorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _useDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CopperDoorBlock(
        ::std::string const&    nameId,
        int                     id,
        ::CopperBlockSet const& copperSet,
        ::Material const&       material,
        ::DoorBlock::DoorType   doorType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&    nameId,
        int                     id,
        ::CopperBlockSet const& copperSet,
        ::Material const&       material,
        ::DoorBlock::DoorType   doorType
    );
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
