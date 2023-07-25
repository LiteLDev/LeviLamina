#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LocalPlayer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCALPLAYER
public:
    LocalPlayer& operator=(LocalPlayer const&) = delete;
    LocalPlayer(LocalPlayer const&)            = delete;
    LocalPlayer()                              = delete;
#endif

public:
};
