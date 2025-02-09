#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class EnderDragon;
struct FloatRange;
// clang-format on

class DragonBaseGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EnderDragon&> mDragon;
    ::ll::TypedStorage<4, 4, float>          mActiveSpeed;
    ::ll::TypedStorage<4, 4, float>          mFlightSpeed;
    ::ll::TypedStorage<4, 4, float>          mTurnSpeed;
    ::ll::TypedStorage<4, 8, ::FloatRange>   mTargetZone;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonBaseGoal() /*override*/;
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
