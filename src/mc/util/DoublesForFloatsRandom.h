#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/DelegatingRandom.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

namespace NoiseUtils {

class DoublesForFloatsRandom : public ::NoiseUtils::DelegatingRandom {

public:
    // prevent constructor by default
    DoublesForFloatsRandom& operator=(DoublesForFloatsRandom const&) = delete;
    DoublesForFloatsRandom(DoublesForFloatsRandom const&)            = delete;
    DoublesForFloatsRandom()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?nextInt\@DelegatingRandom\@NoiseUtils\@\@UEAAHXZ
     */
    virtual int nextInt(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?nextInt\@DelegatingRandom\@NoiseUtils\@\@UEAAHH\@Z
     */
    virtual int nextInt(int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?nextLong\@DelegatingRandom\@NoiseUtils\@\@UEAA_JXZ
     */
    virtual __int64 nextLong(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?nextBoolean\@DelegatingRandom\@NoiseUtils\@\@UEAA_NXZ
     */
    virtual bool nextBoolean(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?nextFloat\@DoublesForFloatsRandom\@NoiseUtils\@\@UEAAMXZ
     */
    virtual float nextFloat(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?nextDouble\@DelegatingRandom\@NoiseUtils\@\@UEAANXZ
     */
    virtual double nextDouble(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?nextGaussianDouble\@DelegatingRandom\@NoiseUtils\@\@UEAANXZ
     */
    virtual double nextGaussianDouble(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?consumeCount\@DelegatingRandom\@NoiseUtils\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int); // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?fork\@DelegatingRandom\@NoiseUtils\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NOISEUTILS_DOUBLESFORFLOATSRANDOM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DoublesForFloatsRandom(); // NOLINT
#endif
};

}; // namespace NoiseUtils
