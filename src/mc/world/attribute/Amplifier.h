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
    // vIndex: 0, symbol: __gen_??1Amplifier@@UEAA@XZ
    virtual ~Amplifier() = default;

    // vIndex: 1, symbol: ?getAmount@Amplifier@@UEBAMHM@Z
    virtual float getAmount(int amplification, float scale) const;

    // vIndex: 2, symbol: ?shouldBuff@Amplifier@@UEBA_NHH@Z
    virtual bool shouldBuff(int remainingDuration, int amplification) const;

    // vIndex: 3, symbol: ?getTickInterval@Amplifier@@UEBAHH@Z
    virtual int getTickInterval(int amplification) const;

    // NOLINTEND
};
