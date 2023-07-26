#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameModeMessenger {

public:
    // prevent constructor by default
    IGameModeMessenger& operator=(IGameModeMessenger const&) = delete;
    IGameModeMessenger(IGameModeMessenger const&)            = delete;
    IGameModeMessenger()                                     = delete;
};
