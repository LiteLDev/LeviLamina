#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WasControlledByLocalInstanceFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WASCONTROLLEDBYLOCALINSTANCEFLAG
public:
    WasControlledByLocalInstanceFlag& operator=(WasControlledByLocalInstanceFlag const&) = delete;
    WasControlledByLocalInstanceFlag(WasControlledByLocalInstanceFlag const&)            = delete;
    WasControlledByLocalInstanceFlag()                                                   = delete;
#endif

public:
};
