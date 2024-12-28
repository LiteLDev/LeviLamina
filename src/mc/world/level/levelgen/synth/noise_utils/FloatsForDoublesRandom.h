#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/noise_utils/DelegatingRandom.h"

namespace NoiseUtils {

class FloatsForDoublesRandom : public ::NoiseUtils::DelegatingRandom {
public:
    // prevent constructor by default
    FloatsForDoublesRandom& operator=(FloatsForDoublesRandom const&);
    FloatsForDoublesRandom(FloatsForDoublesRandom const&);
    FloatsForDoublesRandom();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual double nextDouble() /*override*/;

    // vIndex: 0
    virtual ~FloatsForDoublesRandom() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI double $nextDouble();
    // NOLINTEND
};

} // namespace NoiseUtils
