#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerTickConfig {

public:
    // prevent constructor by default
    PlayerTickConfig& operator=(PlayerTickConfig const&) = delete;
    PlayerTickConfig(PlayerTickConfig const&)            = delete;
    PlayerTickConfig()                                   = delete;
};
