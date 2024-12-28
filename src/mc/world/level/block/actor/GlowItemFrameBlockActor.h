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
    GlowItemFrameBlockActor& operator=(GlowItemFrameBlockActor const&);
    GlowItemFrameBlockActor(GlowItemFrameBlockActor const&);
    GlowItemFrameBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GlowItemFrameBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GlowItemFrameBlockActor(::BlockPos pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
