#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/noise_utils/DelegatingRandom.h"

namespace NoiseUtils {

class DoublesForFloatsRandom : public ::NoiseUtils::DelegatingRandom {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual float nextFloat() /*override*/;

    // vIndex: 0
    virtual ~DoublesForFloatsRandom() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $nextFloat();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NoiseUtils
