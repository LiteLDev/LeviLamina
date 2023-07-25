#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerTickConfig {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERTICKCONFIG
public:
    PlayerTickConfig& operator=(PlayerTickConfig const&) = delete;
    PlayerTickConfig(PlayerTickConfig const&)            = delete;
    PlayerTickConfig()                                   = delete;
#endif

public:
};
