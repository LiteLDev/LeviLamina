#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IPlayerTickPolicy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IPLAYERTICKPOLICY
public:
    IPlayerTickPolicy& operator=(IPlayerTickPolicy const&) = delete;
    IPlayerTickPolicy(IPlayerTickPolicy const&)            = delete;
    IPlayerTickPolicy()                                    = delete;
#endif

public:
};
