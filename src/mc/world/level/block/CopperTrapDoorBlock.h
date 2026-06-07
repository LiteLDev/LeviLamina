#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/TrapDoorBlock.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class Material;
struct CopperBlockSet;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CopperTrapDoorBlock : public ::CopperBlock<::TrapDoorBlock> {
public:
    // prevent constructor by default
    CopperTrapDoorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _useTrapDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CopperTrapDoorBlock(
        ::std::string const&    nameId,
        int                     id,
        ::CopperBlockSet const& copperSet,
        ::Material const&       material
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& nameId, int id, ::CopperBlockSet const& copperSet, ::Material const& material);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
