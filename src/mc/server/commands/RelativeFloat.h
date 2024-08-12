#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {
public:
    float mOffset{};
    bool  mRelative{};

    RelativeFloat() = default;

public:
    // NOLINTBEGIN

    MCAPI RelativeFloat(float value, bool relative = true);

    MCAPI float getValue(float center = 0) const;

    MCAPI bool isRelative() const;

    // NOLINTEND
};
