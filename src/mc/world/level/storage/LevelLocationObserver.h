#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelLocationObserver {

public:
    // prevent constructor by default
    LevelLocationObserver& operator=(LevelLocationObserver const&) = delete;
    LevelLocationObserver(LevelLocationObserver const&)            = delete;
    LevelLocationObserver()                                        = delete;
};
