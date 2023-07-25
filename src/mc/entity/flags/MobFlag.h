#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBFLAG
public:
    MobFlag& operator=(MobFlag const&) = delete;
    MobFlag(MobFlag const&)            = delete;
    MobFlag()                          = delete;
#endif

public:
};
