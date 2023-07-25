#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ControlledByLocalInstanceFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTROLLEDBYLOCALINSTANCEFLAG
public:
    ControlledByLocalInstanceFlag& operator=(ControlledByLocalInstanceFlag const&) = delete;
    ControlledByLocalInstanceFlag(ControlledByLocalInstanceFlag const&)            = delete;
    ControlledByLocalInstanceFlag()                                                = delete;
#endif

public:
};
