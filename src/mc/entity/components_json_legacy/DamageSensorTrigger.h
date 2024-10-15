#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DamageSensorTrigger {
public:
    // prevent constructor by default
    DamageSensorTrigger& operator=(DamageSensorTrigger const&);
    DamageSensorTrigger();

public:
    // NOLINTBEGIN
    MCAPI DamageSensorTrigger(struct DamageSensorTrigger const&);

    MCAPI void setCause(std::string const& causeName);

    MCAPI ~DamageSensorTrigger();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct DamageSensorTrigger const&);

    MCAPI void dtor$();

    // NOLINTEND
};
