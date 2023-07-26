#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMinecraftGame {

public:
    // prevent constructor by default
    IMinecraftGame& operator=(IMinecraftGame const&) = delete;
    IMinecraftGame(IMinecraftGame const&)            = delete;
    IMinecraftGame()                                 = delete;
};
