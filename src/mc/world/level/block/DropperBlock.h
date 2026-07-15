#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/DispenserBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class DropperBlock : public ::DispenserBlock {
public:
    // prevent constructor by default
    DropperBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void dispenseFrom(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DropperBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $dispenseFrom(::BlockSource& region, ::BlockPos const& pos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
