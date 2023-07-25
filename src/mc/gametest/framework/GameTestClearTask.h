#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameTestClearTask {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTCLEARTASK
public:
    GameTestClearTask& operator=(GameTestClearTask const&) = delete;
    GameTestClearTask(GameTestClearTask const&)            = delete;
    GameTestClearTask()                                    = delete;
#endif

public:
    /**
     * @symbol ??0GameTestClearTask\@\@QEAA\@AEAVDimension\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI GameTestClearTask(class Dimension&, class BoundingBox const&);
    /**
     * @symbol ?tick\@GameTestClearTask\@\@QEAAXXZ
     */
    MCAPI void tick();
};
