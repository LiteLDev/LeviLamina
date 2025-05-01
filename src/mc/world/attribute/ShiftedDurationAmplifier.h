#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class ShiftedDurationAmplifier : public ::Amplifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6280fc;
    // NOLINTEND

public:
    // prevent constructor by default
    ShiftedDurationAmplifier& operator=(ShiftedDurationAmplifier const&);
    ShiftedDurationAmplifier(ShiftedDurationAmplifier const&);
    ShiftedDurationAmplifier();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShiftedDurationAmplifier() /*override*/ = default;

    // vIndex: 2
    virtual bool shouldBuff(int remainingDuration, int amplification) const /*override*/;

    // vIndex: 3
    virtual int getTickInterval(int amplification) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldBuff(int remainingDuration, int amplification) const;

    MCNAPI int $getTickInterval(int amplification) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
