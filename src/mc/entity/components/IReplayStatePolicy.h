#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IReplayStatePolicy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IREPLAYSTATEPOLICY
public:
    IReplayStatePolicy& operator=(IReplayStatePolicy const&) = delete;
    IReplayStatePolicy(IReplayStatePolicy const&)            = delete;
    IReplayStatePolicy()                                     = delete;
#endif

public:
};
