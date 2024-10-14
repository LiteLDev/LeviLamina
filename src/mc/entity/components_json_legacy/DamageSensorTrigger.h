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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
