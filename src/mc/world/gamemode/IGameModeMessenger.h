#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameModeMessenger {
public:
    // prevent constructor by default
    IGameModeMessenger& operator=(IGameModeMessenger const&);
    IGameModeMessenger(IGameModeMessenger const&);
    IGameModeMessenger();
};
