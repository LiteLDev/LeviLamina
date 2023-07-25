#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerComponentFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERCOMPONENTFLAG
public:
    PlayerComponentFlag& operator=(PlayerComponentFlag const&) = delete;
    PlayerComponentFlag(PlayerComponentFlag const&)            = delete;
    PlayerComponentFlag()                                      = delete;
#endif

public:
};
