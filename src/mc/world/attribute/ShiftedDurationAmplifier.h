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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ShiftedDurationAmplifier() = default;

    // vIndex: 2, symbol: ?shouldBuff@ShiftedDurationAmplifier@@UEBA_NHH@Z
    virtual bool shouldBuff(int, int) const;

    // vIndex: 3, symbol: ?getTickInterval@ShiftedDurationAmplifier@@UEBAHH@Z
    virtual int getTickInterval(int) const;

    // NOLINTEND
};
