#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameModeTimer {
public:
    // prevent constructor by default
    IGameModeTimer& operator=(IGameModeTimer const&);
    IGameModeTimer(IGameModeTimer const&);
    IGameModeTimer();
};
