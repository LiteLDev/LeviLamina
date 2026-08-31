#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class ShiftedDurationAmplifier : public ::Amplifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mShiftedValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShiftedDurationAmplifier() /*override*/;

    virtual bool shouldBuff(int remainingDuration, int amplification) const /*override*/;

    virtual int getTickInterval(int amplification) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $shouldBuff(int remainingDuration, int amplification) const;

    MCAPI int $getTickInterval(int amplification) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
