#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class MultiplyValueAmplifier : public ::Amplifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke2d1df;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplyValueAmplifier& operator=(MultiplyValueAmplifier const&);
    MultiplyValueAmplifier(MultiplyValueAmplifier const&);
    MultiplyValueAmplifier();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual float getAmount(int amplification, float scale) const /*override*/;

    // vIndex: 0
    virtual ~MultiplyValueAmplifier() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
