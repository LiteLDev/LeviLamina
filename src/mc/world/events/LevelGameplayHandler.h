#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelGameplayHandler {

public:
    // prevent constructor by default
    LevelGameplayHandler& operator=(LevelGameplayHandler const&) = delete;
    LevelGameplayHandler(LevelGameplayHandler const&)            = delete;
    LevelGameplayHandler()                                       = delete;
};
