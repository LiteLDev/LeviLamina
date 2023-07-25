#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerEatFoodEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYEREATFOODEVENT
public:
    PlayerEatFoodEvent& operator=(PlayerEatFoodEvent const&) = delete;
    PlayerEatFoodEvent(PlayerEatFoodEvent const&)            = delete;
    PlayerEatFoodEvent()                                     = delete;
#endif

public:
    /**
     * @symbol ??1PlayerEatFoodEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerEatFoodEvent();
};
