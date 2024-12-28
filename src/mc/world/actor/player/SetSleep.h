#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetSleep {
public:
    // prevent constructor by default
    SetSleep& operator=(SetSleep const&);
    SetSleep(SetSleep const&);
    SetSleep();
};
