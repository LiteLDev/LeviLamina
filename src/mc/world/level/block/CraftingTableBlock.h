#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Experiments;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CraftingTableBlock : public ::BlockType {
public:
    // prevent constructor by default
    CraftingTableBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isCraftingBlock() const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CraftingTableBlock(::std::string const& nameId, int id);

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isCraftingBlock() const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
