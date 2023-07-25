#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NoiseUtils {

class DelegatingRandom {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOISEUTILS_DELEGATINGRANDOM
public:
    DelegatingRandom& operator=(DelegatingRandom const&) = delete;
    DelegatingRandom(DelegatingRandom const&)            = delete;
    DelegatingRandom()                                   = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NOISEUTILS_DELEGATINGRANDOM
    /**
     * @symbol ?consumeCount\@DelegatingRandom\@NoiseUtils\@\@UEAAXI\@Z
     */
    MCVAPI void consumeCount(unsigned int);
    /**
     * @symbol
     * ?fork\@DelegatingRandom\@NoiseUtils\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class IRandom> fork();
    /**
     * @symbol ?nextBoolean\@DelegatingRandom\@NoiseUtils\@\@UEAA_NXZ
     */
    MCVAPI bool nextBoolean();
    /**
     * @symbol ?nextDouble\@DelegatingRandom\@NoiseUtils\@\@UEAANXZ
     */
    MCVAPI double nextDouble();
    /**
     * @symbol ?nextGaussianDouble\@DelegatingRandom\@NoiseUtils\@\@UEAANXZ
     */
    MCVAPI double nextGaussianDouble();
    /**
     * @symbol ?nextInt\@DelegatingRandom\@NoiseUtils\@\@UEAAHH\@Z
     */
    MCVAPI int nextInt(int);
    /**
     * @symbol ?nextInt\@DelegatingRandom\@NoiseUtils\@\@UEAAHXZ
     */
    MCVAPI int nextInt();
    /**
     * @symbol ?nextLong\@DelegatingRandom\@NoiseUtils\@\@UEAA_JXZ
     */
    MCVAPI __int64 nextLong();
#endif
};

}; // namespace NoiseUtils
