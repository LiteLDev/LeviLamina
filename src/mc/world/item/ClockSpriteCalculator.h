#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClockSpriteCalculator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLOCKSPRITECALCULATOR
public:
    ClockSpriteCalculator& operator=(ClockSpriteCalculator const&) = delete;
    ClockSpriteCalculator(ClockSpriteCalculator const&)            = delete;
#endif

public:
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
};
