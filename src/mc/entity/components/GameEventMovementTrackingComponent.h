#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventMovementTrackingComponent {

public:
    // prevent constructor by default
    GameEventMovementTrackingComponent& operator=(GameEventMovementTrackingComponent const&) = delete;
    GameEventMovementTrackingComponent(GameEventMovementTrackingComponent const&)            = delete;
    GameEventMovementTrackingComponent()                                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?initializeFromCode\@GameEventMovementTrackingComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void initializeFromCode(class Actor&, bool);
    /**
     * @symbol ?shouldEmitEntityMoveGameEvent\@GameEventMovementTrackingComponent\@\@QEAA_NXZ
     */
    MCAPI bool shouldEmitEntityMoveGameEvent();
    /**
     * @symbol ?shouldEmitFlapGameEvent\@GameEventMovementTrackingComponent\@\@QEAA_NXZ
     */
    MCAPI bool shouldEmitFlapGameEvent();
    /**
     * @symbol ?shouldEmitSwimGameEvent\@GameEventMovementTrackingComponent\@\@QEAA_NXZ
     */
    MCAPI bool shouldEmitSwimGameEvent();
    // NOLINTEND
};
