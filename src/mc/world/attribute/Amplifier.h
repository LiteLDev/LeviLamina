#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Amplifier {
public:
    // prevent constructor by default
    Amplifier& operator=(Amplifier const&);
    Amplifier(Amplifier const&);
    Amplifier();

public:
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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI float getAmount$(int amplification, float scale) const;

    MCAPI int getTickInterval$(int amplification) const;

    MCAPI bool shouldBuff$(int remainingDuration, int amplification) const;

    // NOLINTEND
};
