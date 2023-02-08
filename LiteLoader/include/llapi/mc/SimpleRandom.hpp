/**
 * @file  SimpleRandom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SimpleRandom.
 *
 */
class SimpleRandom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLERANDOM
public:
    class SimpleRandom& operator=(class SimpleRandom const &) = delete;
    SimpleRandom(class SimpleRandom const &) = delete;
    SimpleRandom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SimpleRandom();
    /**
     * @hash   -763450541
     * @vftbl  1
     * @symbol  ?nextInt\@SimpleRandom\@\@UEAAHXZ
     */
    virtual int nextInt();
    /**
     * @hash   -2039585188
     * @vftbl  2
     * @symbol  ?nextInt\@SimpleRandom\@\@UEAAHH\@Z
     */
    virtual int nextInt(int);
    /**
     * @hash   -887801088
     * @vftbl  3
     * @symbol  ?nextLong\@SimpleRandom\@\@UEAA_JXZ
     */
    virtual __int64 nextLong();
    /**
     * @hash   -547800151
     * @vftbl  4
     * @symbol  ?nextBoolean\@SimpleRandom\@\@UEAA_NXZ
     */
    virtual bool nextBoolean();
    /**
     * @hash   -942791437
     * @vftbl  5
     * @symbol  ?nextFloat\@SimpleRandom\@\@UEAAMXZ
     */
    virtual float nextFloat();
    /**
     * @hash   1208362169
     * @vftbl  6
     * @symbol  ?nextDouble\@SimpleRandom\@\@UEAANXZ
     */
    virtual double nextDouble();
    /**
     * @hash   1712880148
     * @vftbl  7
     * @symbol  ?nextGaussianDouble\@SimpleRandom\@\@UEAANXZ
     */
    virtual double nextGaussianDouble();
    /**
     * @hash   145436997
     * @vftbl  8
     * @symbol  ?consumeCount\@SimpleRandom\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int);
    /**
     * @hash   144329869
     * @vftbl  9
     * @symbol  ?fork\@SimpleRandom\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork();
    /**
     * @hash   -604886821
     * @vftbl  10
     * @symbol  ?forkPositional\@SimpleRandom\@\@UEAA?AV?$unique_ptr\@VIPositionalRandomFactory\@\@U?$default_delete\@VIPositionalRandomFactory\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

};