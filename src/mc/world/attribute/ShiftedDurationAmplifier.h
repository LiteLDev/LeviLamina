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
    // vIndex: 0
    virtual ~ShiftedDurationAmplifier() = default;

    // vIndex: 2
    virtual bool shouldBuff(int remainingDuration, int amplification) const;

    // vIndex: 3
    virtual int getTickInterval(int amplification) const;

    // NOLINTEND
};
