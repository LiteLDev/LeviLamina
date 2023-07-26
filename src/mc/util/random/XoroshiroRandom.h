#pragma once

#include "mc/_HeaderOutputPredefine.h"

class XoroshiroRandom {

public:
    // prevent constructor by default
    XoroshiroRandom& operator=(XoroshiroRandom const&) = delete;
    XoroshiroRandom(XoroshiroRandom const&)            = delete;
    XoroshiroRandom()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?nextInt\@XoroshiroRandom\@\@UEAAHXZ
     */
    virtual int nextInt(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?nextInt\@XoroshiroRandom\@\@UEAAHH\@Z
     */
    virtual int nextInt(int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?nextLong\@XoroshiroRandom\@\@UEAA_JXZ
     */
    virtual __int64 nextLong(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?nextBoolean\@XoroshiroRandom\@\@UEAA_NXZ
     */
    virtual bool nextBoolean(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?nextFloat\@XoroshiroRandom\@\@UEAAMXZ
     */
    virtual float nextFloat(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?nextDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextDouble(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?nextGaussianDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextGaussianDouble(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?consumeCount\@XoroshiroRandom\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int); // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?fork\@XoroshiroRandom\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork(); // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?forkPositional\@XoroshiroRandom\@\@UEAA?AV?$unique_ptr\@VIPositionalRandomFactory\@\@U?$default_delete\@VIPositionalRandomFactory\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_XOROSHIRORANDOM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~XoroshiroRandom(); // NOLINT
#endif
};
