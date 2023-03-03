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
     * @vftbl  1
     * @symbol  ?nextInt\@XoroshiroRandom\@\@UEAAHXZ
     */
    virtual int nextInt();
    /**
     * @vftbl  2
     * @symbol  ?nextInt\@XoroshiroRandom\@\@UEAAHH\@Z
     */
    virtual int nextInt(int);
    /**
     * @vftbl  3
     * @symbol  ?nextLong\@XoroshiroRandom\@\@UEAA_JXZ
     */
    virtual __int64 nextLong();
    /**
     * @vftbl  4
     * @symbol  ?nextBoolean\@XoroshiroRandom\@\@UEAA_NXZ
     */
    virtual bool nextBoolean();
    /**
     * @vftbl  5
     * @symbol  ?nextFloat\@XoroshiroRandom\@\@UEAAMXZ
     */
    virtual float nextFloat();
    /**
     * @vftbl  6
     * @symbol  ?nextDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextDouble();
    /**
     * @vftbl  7
     * @symbol  ?nextGaussianDouble\@XoroshiroRandom\@\@UEAANXZ
     */
    virtual double nextGaussianDouble();
    /**
     * @vftbl  8
     * @symbol  ?consumeCount\@XoroshiroRandom\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int);
    /**
     * @vftbl  9
     * @symbol  ?fork\@XoroshiroRandom\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork();
    /**
     * @vftbl  10
     * @symbol  ?forkPositional\@XoroshiroRandom\@\@UEAA?AV?$unique_ptr\@VIPositionalRandomFactory\@\@U?$default_delete\@VIPositionalRandomFactory\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

};