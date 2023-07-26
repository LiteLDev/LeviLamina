#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimpleRandom {

public:
    // prevent constructor by default
    SimpleRandom& operator=(SimpleRandom const&) = delete;
    SimpleRandom(SimpleRandom const&)            = delete;
    SimpleRandom()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?nextInt\@SimpleRandom\@\@UEAAHXZ
     */
    virtual int nextInt(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?nextInt\@SimpleRandom\@\@UEAAHH\@Z
     */
    virtual int nextInt(int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?nextLong\@SimpleRandom\@\@UEAA_JXZ
     */
    virtual __int64 nextLong(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?nextBoolean\@SimpleRandom\@\@UEAA_NXZ
     */
    virtual bool nextBoolean(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?nextFloat\@SimpleRandom\@\@UEAAMXZ
     */
    virtual float nextFloat(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?nextDouble\@SimpleRandom\@\@UEAANXZ
     */
    virtual double nextDouble(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?nextGaussianDouble\@SimpleRandom\@\@UEAANXZ
     */
    virtual double nextGaussianDouble(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?consumeCount\@SimpleRandom\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int); // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?fork\@SimpleRandom\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork(); // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?forkPositional\@SimpleRandom\@\@UEAA?AV?$unique_ptr\@VIPositionalRandomFactory\@\@U?$default_delete\@VIPositionalRandomFactory\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLERANDOM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SimpleRandom(); // NOLINT
#endif
};
