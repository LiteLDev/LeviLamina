#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WolfFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOLFFLAG
public:
    WolfFlag& operator=(WolfFlag const&) = delete;
    WolfFlag(WolfFlag const&)            = delete;
    WolfFlag()                           = delete;
#endif

public:
};
