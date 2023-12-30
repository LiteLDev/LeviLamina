#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class ShiftedDurationAmplifier : public ::Amplifier {
public:
    // prevent constructor by default
    ShiftedDurationAmplifier& operator=(ShiftedDurationAmplifier const&);
    ShiftedDurationAmplifier(ShiftedDurationAmplifier const&);
    ShiftedDurationAmplifier();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShiftedDurationAmplifier@@UEAA@XZ
    virtual ~ShiftedDurationAmplifier() = default;

    // vIndex: 2, symbol: ?shouldBuff@ShiftedDurationAmplifier@@UEBA_NHH@Z
    virtual bool shouldBuff(int remainingDuration, int amplification) const;

    // vIndex: 3, symbol: ?getTickInterval@ShiftedDurationAmplifier@@UEBAHH@Z
    virtual int getTickInterval(int amplification) const;

    // NOLINTEND
};
