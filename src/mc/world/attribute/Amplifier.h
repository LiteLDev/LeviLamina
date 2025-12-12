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
    MCFOLD float $getAmount(int amplification, float scale) const;

    MCFOLD bool $shouldBuff(int remainingDuration, int amplification) const;

    MCFOLD int $getTickInterval(int amplification) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
