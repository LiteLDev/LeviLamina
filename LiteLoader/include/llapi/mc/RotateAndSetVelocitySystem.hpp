/**
 * @file  RotateAndSetVelocitySystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RotateAndSetVelocitySystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROTATEANDSETVELOCITYSYSTEM
public:
    class RotateAndSetVelocitySystem& operator=(class RotateAndSetVelocitySystem const &) = delete;
    RotateAndSetVelocitySystem(class RotateAndSetVelocitySystem const &) = delete;
    RotateAndSetVelocitySystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@RotateAndSetVelocitySystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?doTick\@RotateAndSetVelocitySystem\@\@SAXAEBUMoveInputComponent\@\@AEBUPlayerInputModeComponent\@\@AEBUVRMoveAdjustAngleComponent\@\@AEAULocalMoveVelocityComponent\@\@\@Z
     */
    MCAPI static void doTick(struct MoveInputComponent const &, struct PlayerInputModeComponent const &, struct VRMoveAdjustAngleComponent const &, struct LocalMoveVelocityComponent &);
    /**
     * @symbol ?tick\@RotateAndSetVelocitySystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPlayerInputRequestComponent\@\@\@\@$$CBUMoveInputComponent\@\@$$CBUPlayerInputModeComponent\@\@$$CBUVRMoveAdjustAngleComponent\@\@ULocalMoveVelocityComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PlayerInputRequestComponent>, struct MoveInputComponent const, struct PlayerInputModeComponent const, struct VRMoveAdjustAngleComponent const, struct LocalMoveVelocityComponent>);

};
