#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"

class RotateAndSetVelocitySystem {

public:
    // prevent constructor by default
    RotateAndSetVelocitySystem& operator=(RotateAndSetVelocitySystem const&) = delete;
    RotateAndSetVelocitySystem(RotateAndSetVelocitySystem const&)            = delete;
    RotateAndSetVelocitySystem()                                             = delete;

public:
    /**
     * @symbol ?createSystem\@RotateAndSetVelocitySystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
    /**
     * @symbol
     * ?doTick\@RotateAndSetVelocitySystem\@\@SAXAEBUMoveInputComponent\@\@AEBUPlayerInputModeComponent\@\@AEBUVRMoveAdjustAngleComponent\@\@AEAULocalMoveVelocityComponent\@\@\@Z
     */
    MCAPI static void
    doTick(struct MoveInputComponent const&, struct PlayerInputModeComponent const&, struct VRMoveAdjustAngleComponent const&, struct LocalMoveVelocityComponent&); // NOLINT
    /**
     * @symbol
     * ?tick\@RotateAndSetVelocitySystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPlayerInputRequestComponent\@\@\@\@$$CBUMoveInputComponent\@\@$$CBUPlayerInputModeComponent\@\@$$CBUVRMoveAdjustAngleComponent\@\@ULocalMoveVelocityComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<
                           class StrictEntityContext,
                           class EntityRegistryBase,
                           struct Include<struct PlayerInputRequestComponent>,
                           struct MoveInputComponent const,
                           struct PlayerInputModeComponent const,
                           struct VRMoveAdjustAngleComponent const,
                           struct LocalMoveVelocityComponent>); // NOLINT
};
