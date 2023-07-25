#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimpleRandom {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLERANDOM
public:
    SimpleRandom& operator=(SimpleRandom const&) = delete;
    SimpleRandom(SimpleRandom const&)            = delete;
    SimpleRandom()                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?nextInt\@SimpleRandom\@\@UEAAHXZ
     */
    virtual int nextInt();
    /**
     * @vftbl 2
     * @symbol ?nextInt\@SimpleRandom\@\@UEAAHH\@Z
     */
    virtual int nextInt(int);
    /**
     * @vftbl 3
     * @symbol ?nextLong\@SimpleRandom\@\@UEAA_JXZ
     */
    virtual __int64 nextLong();
    /**
     * @vftbl 4
     * @symbol ?nextBoolean\@SimpleRandom\@\@UEAA_NXZ
     */
    virtual bool nextBoolean();
    /**
     * @vftbl 5
     * @symbol ?nextFloat\@SimpleRandom\@\@UEAAMXZ
     */
    virtual float nextFloat();
    /**
     * @vftbl 6
     * @symbol ?nextDouble\@SimpleRandom\@\@UEAANXZ
     */
    virtual double nextDouble();
    /**
     * @vftbl 7
     * @symbol ?nextGaussianDouble\@SimpleRandom\@\@UEAANXZ
     */
    virtual double nextGaussianDouble();
    /**
     * @vftbl 8
     * @symbol ?consumeCount\@SimpleRandom\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int);
    /**
     * @vftbl 9
     * @symbol
     * ?fork\@SimpleRandom\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork();
    /**
     * @vftbl 10
     * @symbol
     * ?forkPositional\@SimpleRandom\@\@UEAA?AV?$unique_ptr\@VIPositionalRandomFactory\@\@U?$default_delete\@VIPositionalRandomFactory\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLERANDOM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SimpleRandom();
#endif
};
