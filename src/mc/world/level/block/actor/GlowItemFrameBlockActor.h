#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/ItemFrameBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class GlowItemFrameBlockActor : public ::ItemFrameBlockActor {
public:
    // prevent constructor by default
    GlowItemFrameBlockActor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GlowItemFrameBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
