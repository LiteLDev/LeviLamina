#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSleepStatus {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSLEEPSTATUS
public:
    PlayerSleepStatus& operator=(PlayerSleepStatus const&) = delete;
    PlayerSleepStatus(PlayerSleepStatus const&)            = delete;
    PlayerSleepStatus()                                    = delete;
#endif

public:
};
