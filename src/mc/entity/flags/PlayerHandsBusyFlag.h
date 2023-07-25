#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerHandsBusyFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERHANDSBUSYFLAG
public:
    PlayerHandsBusyFlag& operator=(PlayerHandsBusyFlag const&) = delete;
    PlayerHandsBusyFlag(PlayerHandsBusyFlag const&)            = delete;
    PlayerHandsBusyFlag()                                      = delete;
#endif

public:
};
