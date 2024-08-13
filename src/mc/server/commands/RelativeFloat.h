#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {
public:
    float mOffset{};
    bool  mRelative{};

    RelativeFloat() = default;

    RelativeFloat(float value, bool relative = true) : mOffset(value), mRelative(relative) {}

public:
    // NOLINTBEGIN

    MCAPI float getValue(float center = 0) const;

    MCAPI bool isRelative() const;

    // NOLINTEND
};
