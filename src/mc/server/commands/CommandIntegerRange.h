#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandIntegerRange {
public:
    int  mMinValue; // this+0x0
    int  mMaxValue; // this+0x4
    bool mInvert;   // this+0x8

public:
    // NOLINTBEGIN
    // symbol: ??0CommandIntegerRange@@QEAA@XZ
    MCAPI CommandIntegerRange();

    // symbol: ??0CommandIntegerRange@@QEAA@HH_N0@Z
    MCAPI CommandIntegerRange(int, int, bool, bool);

    // symbol: ?isWithinRange@CommandIntegerRange@@QEBA_NH@Z
    MCAPI bool isWithinRange(int value) const;

    // NOLINTEND
};
