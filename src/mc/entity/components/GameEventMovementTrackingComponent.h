#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventMovementTrackingComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMOVEMENTTRACKINGCOMPONENT
public:
    GameEventMovementTrackingComponent& operator=(GameEventMovementTrackingComponent const&) = delete;
    GameEventMovementTrackingComponent(GameEventMovementTrackingComponent const&)            = delete;
    GameEventMovementTrackingComponent()                                                     = delete;
#endif

public:
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
};
