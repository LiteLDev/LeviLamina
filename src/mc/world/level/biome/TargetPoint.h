#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetPoint {
public:
    // prevent constructor by default
    TargetPoint& operator=(TargetPoint const&);
    TargetPoint(TargetPoint const&);
    TargetPoint();

public:
    // NOLINTBEGIN
    MCAPI
    TargetPoint(float temperature, float humidity, float continentalness, float erosion, float depth, float weirdness);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
