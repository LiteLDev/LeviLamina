#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMinecraftGame {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMINECRAFTGAME
public:
    IMinecraftGame& operator=(IMinecraftGame const&) = delete;
    IMinecraftGame(IMinecraftGame const&)            = delete;
    IMinecraftGame()                                 = delete;
#endif

public:
};
