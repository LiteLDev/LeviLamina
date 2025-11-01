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
    MCNAPI float $getAmount(int amplification, float scale) const;

    MCNAPI bool $shouldBuff(int remainingDuration, int amplification) const;

    MCNAPI int $getTickInterval(int amplification) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
