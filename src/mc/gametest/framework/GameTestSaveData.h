#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestSaveData {

public:
    // prevent constructor by default
    GameTestSaveData& operator=(GameTestSaveData const&) = delete;
    GameTestSaveData(GameTestSaveData const&)            = delete;
    GameTestSaveData()                                   = delete;

public:
    /**
     * @symbol ??1GameTestSaveData\@\@QEAA\@XZ
     */
    MCAPI ~GameTestSaveData(); // NOLINT
};
