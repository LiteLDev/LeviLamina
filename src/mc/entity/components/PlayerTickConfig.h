#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerTickConfig {
public:
    // prevent constructor by default
    PlayerTickConfig& operator=(PlayerTickConfig const&);
    PlayerTickConfig(PlayerTickConfig const&);
    PlayerTickConfig();
};
