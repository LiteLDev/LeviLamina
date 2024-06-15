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
    // symbol: ?createSystem@RotateAndSetVelocitySystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?doTick@RotateAndSetVelocitySystem@@SAXAEBUMoveInputComponent@@AEBUPlayerInputModeComponent@@AEBUVRMoveAdjustAngleComponent@@AEAULocalMoveVelocityComponent@@@Z
    MCAPI static void
    doTick(struct MoveInputComponent const& input, struct PlayerInputModeComponent const& inputMode, struct VRMoveAdjustAngleComponent const&, struct LocalMoveVelocityComponent&);

    // NOLINTEND
};
