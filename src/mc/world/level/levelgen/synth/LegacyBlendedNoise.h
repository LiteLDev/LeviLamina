#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyBlendedNoise {

public:
    // prevent constructor by default
    LegacyBlendedNoise& operator=(LegacyBlendedNoise const&) = delete;
    LegacyBlendedNoise(LegacyBlendedNoise const&)            = delete;
    LegacyBlendedNoise()                                     = delete;

public:
    /**
     * @symbol ??1LegacyBlendedNoise\@\@QEAA\@XZ
     */
    MCAPI ~LegacyBlendedNoise(); // NOLINT
    /**
     * @symbol ?make\@LegacyBlendedNoise\@\@SA?AV1\@AEAVIRandom\@\@\@Z
     */
    MCAPI static class LegacyBlendedNoise make(class IRandom&); // NOLINT
};
