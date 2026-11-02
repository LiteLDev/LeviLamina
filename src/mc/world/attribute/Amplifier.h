#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Amplifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Amplifier() = default;

    virtual float getAmount(int amplification, float scale) const;

    virtual bool shouldBuff(int remainingDuration, int amplification) const;

    virtual int getTickInterval(int amplification) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getAmount(int amplification, float scale) const;

    MCNAPI bool $shouldBuff(int remainingDuration, int amplification) const;

    MCNAPI int $getTickInterval(int amplification) const;


    // NOLINTEND
};
