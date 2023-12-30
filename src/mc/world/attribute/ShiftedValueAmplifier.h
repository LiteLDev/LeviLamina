#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class ShiftedValueAmplifier : public ::Amplifier {
public:
    // prevent constructor by default
    ShiftedValueAmplifier& operator=(ShiftedValueAmplifier const&);
    ShiftedValueAmplifier(ShiftedValueAmplifier const&);
    ShiftedValueAmplifier();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShiftedValueAmplifier@@UEAA@XZ
    virtual ~ShiftedValueAmplifier() = default;

    // vIndex: 1, symbol: ?getAmount@ShiftedValueAmplifier@@UEBAMHM@Z
    virtual float getAmount(int amplification, float scale) const;

    // NOLINTEND
};
