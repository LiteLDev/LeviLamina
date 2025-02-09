#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class BodyControl : public ::Control {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mTimeStill;
    ::ll::TypedStorage<4, 4, float> mLastHeadY;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BodyControl() /*override*/;

    // vIndex: 1
    virtual void clientTick(::Mob& mob);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BodyControl();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& MAX_CLAMP_ANGLE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clientTick(::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
