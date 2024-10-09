#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RotateAndSetVelocitySystem {
public:
    // prevent constructor by default
    RotateAndSetVelocitySystem& operator=(RotateAndSetVelocitySystem const&);
    RotateAndSetVelocitySystem(RotateAndSetVelocitySystem const&);
    RotateAndSetVelocitySystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void doTick(
        struct MoveInputComponent const&         input,
        struct PlayerInputModeComponent const&   inputMode,
        struct VRMoveAdjustAngleComponent const& adjAngle,
        struct LocalMoveVelocityComponent&       localVelocity
    );

    // NOLINTEND
};
