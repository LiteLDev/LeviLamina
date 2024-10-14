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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
