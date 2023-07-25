#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecartFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTFLAG
public:
    MinecartFlag& operator=(MinecartFlag const&) = delete;
    MinecartFlag(MinecartFlag const&)            = delete;
    MinecartFlag()                               = delete;
#endif

public:
};
