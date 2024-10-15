#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandIntegerRange {
public:
    int  mMinValue{}; // this+0x0
    int  mMaxValue{}; // this+0x4
    bool mInvert{};   // this+0x8

    CommandIntegerRange() = default;

public:
    // NOLINTBEGIN
    MCAPI
    CommandIntegerRange(int minVal, int maxVal, bool invert, bool inclusive);

    MCAPI bool isWithinRange(int value) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(int minVal, int maxVal, bool invert, bool inclusive);

    // NOLINTEND
};
