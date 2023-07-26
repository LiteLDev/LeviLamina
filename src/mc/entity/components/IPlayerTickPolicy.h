#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IPlayerTickPolicy {

public:
    // prevent constructor by default
    IPlayerTickPolicy& operator=(IPlayerTickPolicy const&) = delete;
    IPlayerTickPolicy(IPlayerTickPolicy const&)            = delete;
    IPlayerTickPolicy()                                    = delete;
};
