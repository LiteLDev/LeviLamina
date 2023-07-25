#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSoundEventUtils {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSOUNDEVENTUTILS
public:
    LevelSoundEventUtils& operator=(LevelSoundEventUtils const&) = delete;
    LevelSoundEventUtils(LevelSoundEventUtils const&)            = delete;
    LevelSoundEventUtils()                                       = delete;
#endif

public:
    /**
     * @symbol ?serializePercentageToData\@LevelSoundEventUtils\@\@SAHM\@Z
     */
    MCAPI static int serializePercentageToData(float);

    // private:

private:
    /**
     * @symbol ?MAX_INT_REPRESENTABLE_AS_FLOAT\@LevelSoundEventUtils\@\@0HB
     */
    MCAPI static int const MAX_INT_REPRESENTABLE_AS_FLOAT;
};
