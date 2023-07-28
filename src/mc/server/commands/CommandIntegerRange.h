#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandIntegerRange {

public:
    int  mMinValue; // this+0x0
    int  mMaxValue; // this+0x4
    bool mInvert;   // this+0x8
    /**
     * @symbol ??0CommandIntegerRange\@\@QEAA\@HH_N\@Z
     */
    MCAPI CommandIntegerRange(int, int, bool); // NOLINT
    /**
     * @symbol ??0CommandIntegerRange\@\@QEAA\@XZ
     */
    MCAPI CommandIntegerRange(); // NOLINT
    /**
     * @symbol ?isWithinRange\@CommandIntegerRange\@\@QEBA_NH\@Z
     */
    MCAPI bool isWithinRange(int) const; // NOLINT
};
