#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DashJump {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DASHJUMP
public:
    DashJump& operator=(DashJump const&) = delete;
    DashJump(DashJump const&)            = delete;
    DashJump()                           = delete;
#endif

public:
};
