#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerHandsBusyFlag {
public:
    // prevent constructor by default
    PlayerHandsBusyFlag& operator=(PlayerHandsBusyFlag const&);
    PlayerHandsBusyFlag(PlayerHandsBusyFlag const&);
    PlayerHandsBusyFlag();
};
