#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {
public:
    // member variables
    // NOLINTBEGIN
    float mOffset;
    bool  mRelative;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RelativeFloat();

    MCAPI RelativeFloat(float offset, bool relative = true);

    MCAPI float getValue(float base) const;

    MCAPI bool isRelative() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(float offset, bool relative);
    // NOLINTEND
};
