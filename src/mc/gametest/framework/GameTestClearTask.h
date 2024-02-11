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
    // symbol: ??0GameTestClearTask@@QEAA@AEAVDimension@@AEBVBoundingBox@@@Z
    MCAPI GameTestClearTask(class Dimension& dimension, class BoundingBox const& bounds);

    // symbol: ?tick@GameTestClearTask@@QEAAXXZ
    MCAPI void tick();

    // NOLINTEND
};
