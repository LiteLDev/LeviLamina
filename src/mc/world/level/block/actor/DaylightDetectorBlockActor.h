#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class DaylightDetectorBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    DaylightDetectorBlockActor& operator=(DaylightDetectorBlockActor const&);
    DaylightDetectorBlockActor(DaylightDetectorBlockActor const&);
    DaylightDetectorBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~DaylightDetectorBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DaylightDetectorBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
