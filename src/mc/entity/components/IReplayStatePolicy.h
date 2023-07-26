#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IReplayStatePolicy {

public:
    // prevent constructor by default
    IReplayStatePolicy& operator=(IReplayStatePolicy const&) = delete;
    IReplayStatePolicy(IReplayStatePolicy const&)            = delete;
    IReplayStatePolicy()                                     = delete;
};
