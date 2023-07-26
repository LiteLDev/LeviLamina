#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PrevPosRotSetThisTickFlag {

public:
    // prevent constructor by default
    PrevPosRotSetThisTickFlag& operator=(PrevPosRotSetThisTickFlag const&) = delete;
    PrevPosRotSetThisTickFlag(PrevPosRotSetThisTickFlag const&)            = delete;
    PrevPosRotSetThisTickFlag()                                            = delete;
};
