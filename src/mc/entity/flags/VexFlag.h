#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VexFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEXFLAG
public:
    VexFlag& operator=(VexFlag const&) = delete;
    VexFlag(VexFlag const&)            = delete;
    VexFlag()                          = delete;
#endif

public:
};
