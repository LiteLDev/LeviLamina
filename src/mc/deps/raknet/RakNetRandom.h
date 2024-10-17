#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakNetRandom {
public:
    // prevent constructor by default
    RakNetRandom& operator=(RakNetRandom const&);
    RakNetRandom(RakNetRandom const&);

public:
    // NOLINTBEGIN
    MCAPI RakNetRandom();

    MCAPI void SeedMT(uint seed);

    MCAPI ~RakNetRandom();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace RakNet
