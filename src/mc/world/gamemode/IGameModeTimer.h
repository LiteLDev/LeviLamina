#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameModeTimer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IGAMEMODETIMER
public:
    IGameModeTimer& operator=(IGameModeTimer const&) = delete;
    IGameModeTimer(IGameModeTimer const&)            = delete;
    IGameModeTimer()                                 = delete;
#endif

public:
};
