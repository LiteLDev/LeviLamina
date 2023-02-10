/**
 * @file  GameEventMovementTrackingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventMovementTrackingComponent.
 *
 */
class GameEventMovementTrackingComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMOVEMENTTRACKINGCOMPONENT
public:
    class GameEventMovementTrackingComponent& operator=(class GameEventMovementTrackingComponent const &) = delete;
    GameEventMovementTrackingComponent(class GameEventMovementTrackingComponent const &) = delete;
    GameEventMovementTrackingComponent() = delete;
#endif

public:
    /**
     * @hash   77981717
     * @symbol  ?initializeFromCode\@GameEventMovementTrackingComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void initializeFromCode(class Actor &, bool);
    /**
     * @hash   46110158
     * @symbol  ?shouldEmitEntityMoveGameEvent\@GameEventMovementTrackingComponent\@\@QEAA_NXZ
     */
    MCAPI bool shouldEmitEntityMoveGameEvent();
    /**
     * @hash   -992962596
     * @symbol  ?shouldEmitFlapGameEvent\@GameEventMovementTrackingComponent\@\@QEAA_NXZ
     */
    MCAPI bool shouldEmitFlapGameEvent();
    /**
     * @hash   -933213370
     * @symbol  ?shouldEmitSwimGameEvent\@GameEventMovementTrackingComponent\@\@QEAA_NXZ
     */
    MCAPI bool shouldEmitSwimGameEvent();

};