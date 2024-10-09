#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerComponentFlag {
public:
    // prevent constructor by default
    PlayerComponentFlag& operator=(PlayerComponentFlag const&);
    PlayerComponentFlag(PlayerComponentFlag const&);
    PlayerComponentFlag();
};
