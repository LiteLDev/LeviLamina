#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameTestClearTask {
public:
    // prevent constructor by default
    GameTestClearTask& operator=(GameTestClearTask const&);
    GameTestClearTask(GameTestClearTask const&);
    GameTestClearTask();

public:
    // NOLINTBEGIN
    MCAPI void tick();

    // NOLINTEND
};
