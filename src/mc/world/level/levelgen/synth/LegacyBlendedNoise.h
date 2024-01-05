#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyBlendedNoise {
public:
    // prevent constructor by default
    LegacyBlendedNoise& operator=(LegacyBlendedNoise const&);
    LegacyBlendedNoise(LegacyBlendedNoise const&);
    LegacyBlendedNoise();

public:
    // NOLINTBEGIN
    // symbol: ??1LegacyBlendedNoise@@QEAA@XZ
    MCAPI ~LegacyBlendedNoise();

    // symbol: ?make@LegacyBlendedNoise@@SA?AV1@AEAVIRandom@@@Z
    MCAPI static class LegacyBlendedNoise make(class IRandom& random);

    // NOLINTEND
};
