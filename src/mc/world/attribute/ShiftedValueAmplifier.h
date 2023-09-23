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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getAmount@ShiftedValueAmplifier@@UEBAMHM@Z
    virtual float getAmount(int, float) const;

    // NOLINTEND
};
