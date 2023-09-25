/**
 * @file  IRandom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IRandom.
 *
 */
class IRandom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IRANDOM
public:
    class IRandom& operator=(class IRandom const &) = delete;
    IRandom(class IRandom const &) = delete;
    IRandom() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?nextInt\@XoroshiroRandom\@\@UEAAHXZ
     */
    virtual int nextInt() = 0;
    /**
     * @vftbl 2
     * @symbol ?nextInt\@XoroshiroRandom\@\@UEAAHH\@Z
     */
    virtual int nextInt(int) = 0;
    /**
     * @vftbl 3
     * @symbol ?nextLong\@XoroshiroRandom\@\@UEAA_JXZ
     */
    virtual __int64 nextLong() = 0;
    /**
     * @vftbl 4
     * @symbol ?nextBoolean\@XoroshiroRandom\@\@UEAA_NXZ
     */
    virtual bool nextBoolean() = 0;
    /**
     * @vftbl 5
     * @symbol ?nextFloat\@XoroshiroRandom\@\@UEAAMXZ
     */
    virtual float nextFloat() = 0;
    /**
     * @vftbl 6
     * @symbol ?nextDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextDouble() = 0;
    /**
     * @vftbl 7
     * @symbol ?nextGaussianDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextGaussianDouble() = 0;
    /**
     * @vftbl 8
     * @symbol ?consumeCount\@XoroshiroRandom\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int) = 0;
    /**
     * @vftbl 9
     * @symbol ?fork\@XoroshiroRandom\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork() = 0;
    /**
     * @vftbl 10
     * @symbol ?forkPositional\@IRandom\@\@UEAA?AV?$unique_ptr\@VIPositionalRandomFactory\@\@U?$default_delete\@VIPositionalRandomFactory\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IRANDOM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IRandom();
#endif

};
