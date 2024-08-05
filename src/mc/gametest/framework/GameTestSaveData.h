#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestSaveData {
public:
    // prevent constructor by default
    GameTestSaveData& operator=(GameTestSaveData const&);
    GameTestSaveData(GameTestSaveData const&);
    GameTestSaveData();

public:
    // NOLINTBEGIN
    MCAPI ~GameTestSaveData();

    // NOLINTEND
};
