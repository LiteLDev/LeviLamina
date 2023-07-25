#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasTeleportedFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HASTELEPORTEDFLAG
public:
    HasTeleportedFlag& operator=(HasTeleportedFlag const&) = delete;
    HasTeleportedFlag(HasTeleportedFlag const&)            = delete;
    HasTeleportedFlag()                                    = delete;
#endif

public:
};
