#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRandom {

public:
    // prevent constructor by default
    IRandom& operator=(IRandom const&) = delete;
    IRandom(IRandom const&)            = delete;
    IRandom()                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?nextInt\@DelegatingRandom\@NoiseUtils\@\@UEAAHXZ
     */
    virtual int nextInt() = 0;
    /**
     * @vftbl 2
     * @symbol ?nextInt\@DelegatingRandom\@NoiseUtils\@\@UEAAHH\@Z
     */
    virtual int nextInt(int) = 0;
    /**
     * @vftbl 3
     * @symbol ?nextLong\@DelegatingRandom\@NoiseUtils\@\@UEAA_JXZ
     */
    virtual int64_t nextLong() = 0;
    /**
     * @vftbl 4
     * @symbol ?nextBoolean\@DelegatingRandom\@NoiseUtils\@\@UEAA_NXZ
     */
    virtual bool nextBoolean() = 0;
    /**
     * @vftbl 5
     * @symbol ?nextFloat\@DoublesForFloatsRandom\@NoiseUtils\@\@UEAAMXZ
     */
    virtual float nextFloat() = 0;
    /**
     * @vftbl 6
     * @symbol ?nextDouble\@DelegatingRandom\@NoiseUtils\@\@UEAANXZ
     */
    virtual double nextDouble() = 0;
    /**
     * @vftbl 7
     * @symbol ?nextGaussianDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextGaussianDouble() = 0;
    /**
     * @vftbl 8
     * @symbol ?consumeCount\@DelegatingRandom\@NoiseUtils\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int) = 0;
    /**
     * @vftbl 9
     * @symbol
     * ?fork\@DelegatingRandom\@NoiseUtils\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork() = 0;
    /**
     * @vftbl 10
     * @symbol
     * ?forkPositional\@IRandom\@\@UEAA?AV?$unique_ptr\@VIPositionalRandomFactory\@\@U?$default_delete\@VIPositionalRandomFactory\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IRANDOM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IRandom();
#endif
    // NOLINTEND
};
