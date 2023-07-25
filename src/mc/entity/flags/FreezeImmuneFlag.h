#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FreezeImmuneFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FREEZEIMMUNEFLAG
public:
    FreezeImmuneFlag& operator=(FreezeImmuneFlag const&) = delete;
    FreezeImmuneFlag(FreezeImmuneFlag const&)            = delete;
    FreezeImmuneFlag()                                   = delete;
#endif

public:
};
