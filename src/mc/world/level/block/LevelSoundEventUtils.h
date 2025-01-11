#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSoundEventUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int serializePercentageToData(float valueToSerialize);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_INT_REPRESENTABLE_AS_FLOAT();
    // NOLINTEND
};
