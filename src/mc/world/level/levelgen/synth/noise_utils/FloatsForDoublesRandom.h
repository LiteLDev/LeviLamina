#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/noise_utils/DelegatingRandom.h"

namespace NoiseUtils {

class FloatsForDoublesRandom : public ::NoiseUtils::DelegatingRandom {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual double nextDouble() /*override*/;

    virtual ~FloatsForDoublesRandom() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NoiseUtils
