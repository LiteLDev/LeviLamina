#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IReplayStatePolicy {
public:
    // prevent constructor by default
    IReplayStatePolicy& operator=(IReplayStatePolicy const&);
    IReplayStatePolicy(IReplayStatePolicy const&);
    IReplayStatePolicy();
};
