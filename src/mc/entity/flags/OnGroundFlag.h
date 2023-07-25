#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnGroundFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONGROUNDFLAG
public:
    OnGroundFlag& operator=(OnGroundFlag const&) = delete;
    OnGroundFlag(OnGroundFlag const&)            = delete;
    OnGroundFlag()                               = delete;
#endif

public:
};
