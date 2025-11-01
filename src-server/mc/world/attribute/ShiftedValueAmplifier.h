#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class ShiftedValueAmplifier : public ::Amplifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5295c7;
    ::ll::UntypedStorage<4, 4> mUnk187dcb;
    // NOLINTEND

public:
    // prevent constructor by default
    ShiftedValueAmplifier& operator=(ShiftedValueAmplifier const&);
    ShiftedValueAmplifier(ShiftedValueAmplifier const&);
    ShiftedValueAmplifier();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShiftedValueAmplifier() /*override*/ = default;

    // vIndex: 1
    virtual float getAmount(int amplification, float scale) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getAmount(int amplification, float scale) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
