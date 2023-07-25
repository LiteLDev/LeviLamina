#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EnderDragonFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERDRAGONFLAG
public:
    EnderDragonFlag& operator=(EnderDragonFlag const&) = delete;
    EnderDragonFlag(EnderDragonFlag const&)            = delete;
    EnderDragonFlag()                                  = delete;
#endif

public:
};
