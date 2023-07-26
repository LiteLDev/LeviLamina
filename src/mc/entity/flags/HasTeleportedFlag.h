#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasTeleportedFlag {

public:
    // prevent constructor by default
    HasTeleportedFlag& operator=(HasTeleportedFlag const&) = delete;
    HasTeleportedFlag(HasTeleportedFlag const&)            = delete;
    HasTeleportedFlag()                                    = delete;
};
