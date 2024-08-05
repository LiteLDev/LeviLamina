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
    MCAPI ~LegacyBlendedNoise();

    MCAPI static class LegacyBlendedNoise make(class IRandom& random);

    // NOLINTEND
};
