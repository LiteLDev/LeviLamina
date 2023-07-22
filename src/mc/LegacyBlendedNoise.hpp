/**
 * @file  LegacyBlendedNoise.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyBlendedNoise.
 *
 */
class LegacyBlendedNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBLENDEDNOISE
public:
    class LegacyBlendedNoise& operator=(class LegacyBlendedNoise const &) = delete;
    LegacyBlendedNoise(class LegacyBlendedNoise const &) = delete;
    LegacyBlendedNoise() = delete;
#endif

public:
    /**
     * @symbol  ??1LegacyBlendedNoise\@\@QEAA\@XZ
     */
    MCAPI ~LegacyBlendedNoise();
    /**
     * @symbol  ?make\@LegacyBlendedNoise\@\@SA?AV1\@AEAVIRandom\@\@\@Z
     */
    MCAPI static class LegacyBlendedNoise make(class IRandom &);

};