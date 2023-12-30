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
    // symbol: ??0RakNetRandom@RakNet@@QEAA@XZ
    MCAPI RakNetRandom();

    // symbol: ?SeedMT@RakNetRandom@RakNet@@QEAAXI@Z
    MCAPI void SeedMT(uint seed);

    // symbol: ??1RakNetRandom@RakNet@@QEAA@XZ
    MCAPI ~RakNetRandom();

    // NOLINTEND
};

}; // namespace RakNet
