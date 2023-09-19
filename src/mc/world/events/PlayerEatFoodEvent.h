#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerEatFoodEvent {
public:
    // prevent constructor by default
    PlayerEatFoodEvent& operator=(PlayerEatFoodEvent const&);
    PlayerEatFoodEvent(PlayerEatFoodEvent const&);
    PlayerEatFoodEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1PlayerEatFoodEvent@@QEAA@XZ
    MCAPI ~PlayerEatFoodEvent();

    // NOLINTEND
};
