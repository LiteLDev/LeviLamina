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
    ::ll::TypedStorage<4, 4, int>   mStillTicks;
    ::ll::TypedStorage<4, 4, float> mLastYHeadRot;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void clientTick(::Mob& mob);

    virtual ~BodyControl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _rotateTowards(::Mob& mob, float targetRotation, float clampAngle);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clientTick(::Mob& mob);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
