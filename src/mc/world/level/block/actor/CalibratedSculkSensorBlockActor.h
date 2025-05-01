#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/SculkSensorBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class CalibratedSculkSensorBlockActor : public ::SculkSensorBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CalibratedSculkSensorBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CalibratedSculkSensorBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
