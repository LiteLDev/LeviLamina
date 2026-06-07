#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSoundEventUtils {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static float deserializePercentageFromData(int valueToDeserialize);
#endif

    MCAPI static int serializePercentageToData(float valueToSerialize);
    // NOLINTEND
};
