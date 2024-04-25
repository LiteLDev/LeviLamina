#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSoundEventUtils {
public:
    // prevent constructor by default
    LevelSoundEventUtils& operator=(LevelSoundEventUtils const&);
    LevelSoundEventUtils(LevelSoundEventUtils const&);
    LevelSoundEventUtils();

public:
    // NOLINTBEGIN
    // symbol: ?serializePercentageToData@LevelSoundEventUtils@@SAHM@Z
    MCAPI static int serializePercentageToData(float);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?MAX_INT_REPRESENTABLE_AS_FLOAT@LevelSoundEventUtils@@0HB
    MCAPI static int const MAX_INT_REPRESENTABLE_AS_FLOAT;

    // NOLINTEND
};
