#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"

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

    // symbol:
    // ?tick@RotateAndSetVelocitySystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@UPlayerInputRequestComponent@@@@$$CBUMoveInputComponent@@$$CBUPlayerInputModeComponent@@$$CBUVRMoveAdjustAngleComponent@@ULocalMoveVelocityComponent@@@@@Z
    MCAPI static void tick(class ViewT<
                           class StrictEntityContext,
                           struct Include<struct PlayerInputRequestComponent>,
                           struct MoveInputComponent const,
                           struct PlayerInputModeComponent const,
                           struct VRMoveAdjustAngleComponent const,
                           struct LocalMoveVelocityComponent> view);

    // NOLINTEND
};
