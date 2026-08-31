#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockType;
// clang-format on

class DataDrivenBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    DataDrivenBlockActor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataDrivenBlockActor(::BlockType const& blockType, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockType const& blockType, ::BlockPos const& pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
