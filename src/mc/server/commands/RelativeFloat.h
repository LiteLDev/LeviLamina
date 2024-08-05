#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {
public:
    float mOffset;
    bool  mRelative;

public:
    // NOLINTBEGIN
    MCAPI RelativeFloat();

    MCAPI RelativeFloat(float value, bool relative = true);

    MCAPI float getValue(float center = 0) const;

    MCAPI bool isRelative() const;

    // NOLINTEND
};
