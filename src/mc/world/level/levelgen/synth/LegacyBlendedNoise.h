#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyBlendedNoise {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBLENDEDNOISE
public:
    LegacyBlendedNoise& operator=(LegacyBlendedNoise const&) = delete;
    LegacyBlendedNoise(LegacyBlendedNoise const&)            = delete;
    LegacyBlendedNoise()                                     = delete;
#endif

public:
    /**
     * @symbol ??1LegacyBlendedNoise\@\@QEAA\@XZ
     */
    MCAPI ~LegacyBlendedNoise();
    /**
     * @symbol ?make\@LegacyBlendedNoise\@\@SA?AV1\@AEAVIRandom\@\@\@Z
     */
    MCAPI static class LegacyBlendedNoise make(class IRandom&);
};
