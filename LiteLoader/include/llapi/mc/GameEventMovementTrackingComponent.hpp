/**
 * @file  MC/GameEventMovementTrackingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1010090213
     * @symbol ?initializeFromCode@GameEventMovementTrackingComponent@@QEAAXAEAVActor@@_N@Z
     */
    MCAPI void initializeFromCode(class Actor &, bool);
    /**
     * @hash   978203278
     * @symbol ?shouldEmitEntityMoveGameEvent@GameEventMovementTrackingComponent@@QEAA_NXZ
     */
    MCAPI bool shouldEmitEntityMoveGameEvent();
    /**
     * @hash   -60869476
     * @symbol ?shouldEmitFlapGameEvent@GameEventMovementTrackingComponent@@QEAA_NXZ
     */
    MCAPI bool shouldEmitFlapGameEvent();
    /**
     * @hash   -1120250
     * @symbol ?shouldEmitSwimGameEvent@GameEventMovementTrackingComponent@@QEAA_NXZ
     */
    MCAPI bool shouldEmitSwimGameEvent();

};