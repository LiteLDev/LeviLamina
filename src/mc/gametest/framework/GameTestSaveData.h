#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestSaveData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTSAVEDATA
public:
    GameTestSaveData& operator=(GameTestSaveData const&) = delete;
    GameTestSaveData(GameTestSaveData const&)            = delete;
    GameTestSaveData()                                   = delete;
#endif

public:
    /**
     * @symbol ??1GameTestSaveData\@\@QEAA\@XZ
     */
    MCAPI ~GameTestSaveData();
};
