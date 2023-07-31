#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClockSpriteCalculator {

public:
    // prevent constructor by default
    ClockSpriteCalculator& operator=(ClockSpriteCalculator const&) = delete;
    ClockSpriteCalculator(ClockSpriteCalculator const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ClockSpriteCalculator\@\@QEAA\@XZ
     */
    MCAPI ClockSpriteCalculator();
    /**
     * @symbol ?update\@ClockSpriteCalculator\@\@QEAAHAEBVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    MCAPI int update(class BlockSource const&, class Vec3 const&, bool);
    /**
     * @symbol ?update\@ClockSpriteCalculator\@\@QEAAHAEAVActor\@\@_N\@Z
     */
    MCAPI int update(class Actor&, bool);
    // NOLINTEND
};
