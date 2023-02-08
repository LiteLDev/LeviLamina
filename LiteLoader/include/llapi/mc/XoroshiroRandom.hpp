/**
 * @file  XoroshiroRandom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class XoroshiroRandom.
 *
 */
class XoroshiroRandom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XOROSHIRORANDOM
public:
    class XoroshiroRandom& operator=(class XoroshiroRandom const &) = delete;
    XoroshiroRandom(class XoroshiroRandom const &) = delete;
    XoroshiroRandom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~XoroshiroRandom();
    /**
     * @hash   -901128584
     * @vftbl  1
     * @symbol  ?nextInt\@XoroshiroRandom\@\@UEAAHXZ
     */
    virtual int nextInt();
    /**
     * @hash   -505469673
     * @vftbl  2
     * @symbol  ?nextInt\@XoroshiroRandom\@\@UEAAHH\@Z
     */
    virtual int nextInt(int);
    /**
     * @hash   -2034721723
     * @vftbl  3
     * @symbol  ?nextLong\@XoroshiroRandom\@\@UEAA_JXZ
     */
    virtual __int64 nextLong();
    /**
     * @hash   -1330125298
     * @vftbl  4
     * @symbol  ?nextBoolean\@XoroshiroRandom\@\@UEAA_NXZ
     */
    virtual bool nextBoolean();
    /**
     * @hash   -616467288
     * @vftbl  5
     * @symbol  ?nextFloat\@XoroshiroRandom\@\@UEAAMXZ
     */
    virtual float nextFloat();
    /**
     * @hash   2056862254
     * @vftbl  6
     * @symbol  ?nextDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextDouble();
    /**
     * @hash   -1426037527
     * @vftbl  7
     * @symbol  ?nextGaussianDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextGaussianDouble();
    /**
     * @hash   98978464
     * @vftbl  8
     * @symbol  ?consumeCount\@XoroshiroRandom\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int);
    /**
     * @hash   -1505546158
     * @vftbl  9
     * @symbol  ?fork\@XoroshiroRandom\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork();
    /**
     * @hash   1477837280
     * @vftbl  10
     * @symbol  ?forkPositional\@XoroshiroRandom\@\@UEAA?AV?$unique_ptr\@VIPositionalRandomFactory\@\@U?$default_delete\@VIPositionalRandomFactory\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

};