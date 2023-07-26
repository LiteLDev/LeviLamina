#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

namespace NoiseUtils {

class DelegatingRandom {

public:
    // prevent constructor by default
    DelegatingRandom& operator=(DelegatingRandom const&) = delete;
    DelegatingRandom(DelegatingRandom const&)            = delete;
    DelegatingRandom()                                   = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NOISEUTILS_DELEGATINGRANDOM
    /**
     * @symbol ?consumeCount\@DelegatingRandom\@NoiseUtils\@\@UEAAXI\@Z
     */
    MCVAPI void consumeCount(unsigned int); // NOLINT
    /**
     * @symbol
     * ?fork\@DelegatingRandom\@NoiseUtils\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class IRandom> fork(); // NOLINT
    /**
     * @symbol ?nextBoolean\@DelegatingRandom\@NoiseUtils\@\@UEAA_NXZ
     */
    MCVAPI bool nextBoolean(); // NOLINT
    /**
     * @symbol ?nextDouble\@DelegatingRandom\@NoiseUtils\@\@UEAANXZ
     */
    MCVAPI double nextDouble(); // NOLINT
    /**
     * @symbol ?nextGaussianDouble\@DelegatingRandom\@NoiseUtils\@\@UEAANXZ
     */
    MCVAPI double nextGaussianDouble(); // NOLINT
    /**
     * @symbol ?nextInt\@DelegatingRandom\@NoiseUtils\@\@UEAAHH\@Z
     */
    MCVAPI int nextInt(int); // NOLINT
    /**
     * @symbol ?nextInt\@DelegatingRandom\@NoiseUtils\@\@UEAAHXZ
     */
    MCVAPI int nextInt(); // NOLINT
    /**
     * @symbol ?nextLong\@DelegatingRandom\@NoiseUtils\@\@UEAA_JXZ
     */
    MCVAPI __int64 nextLong(); // NOLINT
#endif
};

}; // namespace NoiseUtils
