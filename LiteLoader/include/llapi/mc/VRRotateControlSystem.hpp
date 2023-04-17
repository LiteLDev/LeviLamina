/**
 * @file  VRRotateControlSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VRRotateControlSystem.
 *
 */
class VRRotateControlSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VRROTATECONTROLSYSTEM
public:
    class VRRotateControlSystem& operator=(class VRRotateControlSystem const &) = delete;
    VRRotateControlSystem(class VRRotateControlSystem const &) = delete;
    VRRotateControlSystem() = delete;
#endif

public:
    /**
     * @symbol ?create\@VRRotateControlSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?tick\@VRRotateControlSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPlayerInputRequestComponent\@\@\@\@$$CBUMoveInputComponent\@\@$$CBUPlayerInputModeComponent\@\@$$CBUVRMoveAdjustAngleComponent\@\@ULocalMoveVelocityComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PlayerInputRequestComponent>, struct MoveInputComponent const, struct PlayerInputModeComponent const, struct VRMoveAdjustAngleComponent const, struct LocalMoveVelocityComponent>);

};
