#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameModeTimer {

public:
    // prevent constructor by default
    IGameModeTimer& operator=(IGameModeTimer const&) = delete;
    IGameModeTimer(IGameModeTimer const&)            = delete;
    IGameModeTimer()                                 = delete;
};
