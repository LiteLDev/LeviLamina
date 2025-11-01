#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Amplifier {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Amplifier() = default;

    // vIndex: 1
    virtual float getAmount(int amplification, float scale) const;

    // vIndex: 2
    virtual bool shouldBuff(int remainingDuration, int amplification) const;

    // vIndex: 3
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
