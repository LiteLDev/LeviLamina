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
    // vIndex: 0
    virtual ~ShiftedValueAmplifier() = default;

    // vIndex: 1
    virtual float getAmount(int amplification, float scale) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI float getAmount$(int amplification, float scale) const;

    // NOLINTEND
};
