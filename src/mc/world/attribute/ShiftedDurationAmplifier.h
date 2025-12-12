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
    virtual ~ShiftedDurationAmplifier() /*override*/ = default;

    virtual bool shouldBuff(int remainingDuration, int amplification) const /*override*/;

    virtual int getTickInterval(int amplification) const /*override*/;
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
