#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/noise_utils/DelegatingRandom.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
class IRandom;
namespace NoiseUtils { class DelegatingRandom; }
// clang-format on

namespace NoiseUtils {

class DoublesForFloatsRandom : public ::NoiseUtils::DelegatingRandom {
public:
    // prevent constructor by default
    DoublesForFloatsRandom& operator=(DoublesForFloatsRandom const&);
    DoublesForFloatsRandom(DoublesForFloatsRandom const&);
    DoublesForFloatsRandom();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DoublesForFloatsRandom();

    // vIndex: 5
    virtual float nextFloat();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI float nextFloat$();

    // NOLINTEND
};

}; // namespace NoiseUtils
