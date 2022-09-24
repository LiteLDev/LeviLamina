/**
 * @file  XoroshiroRandom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~XoroshiroRandom();
    /**
     * @hash   -1109827032
     * @vftbl  1
     * @symbol ?nextInt@XoroshiroRandom@@UEAAHXZ
     */
    virtual int nextInt();
    /**
     * @hash   -714168121
     * @vftbl  2
     * @symbol ?nextInt@XoroshiroRandom@@UEAAHH@Z
     */
    virtual int nextInt(int);
    /**
     * @hash   2051547125
     * @vftbl  3
     * @symbol ?nextLong@XoroshiroRandom@@UEAA_JXZ
     */
    virtual __int64 nextLong();
    /**
     * @hash   -1538823746
     * @vftbl  4
     * @symbol ?nextBoolean@XoroshiroRandom@@UEAA_NXZ
     */
    virtual bool nextBoolean();
    /**
     * @hash   -825165736
     * @vftbl  5
     * @symbol ?nextFloat@XoroshiroRandom@@UEAAMXZ
     */
    virtual float nextFloat();
    /**
     * @hash   1848163806
     * @vftbl  6
     * @symbol ?nextDouble@XoroshiroRandom@@UEAANXZ
     */
    virtual double nextDouble();
    /**
     * @hash   -1634735975
     * @vftbl  7
     * @symbol ?nextGaussianDouble@XoroshiroRandom@@UEAANXZ
     */
    virtual double nextGaussianDouble();
    /**
     * @hash   -109412464
     * @vftbl  8
     * @symbol ?consumeCount@XoroshiroRandom@@UEAAXI@Z
     */
    virtual void consumeCount(unsigned int);
    /**
     * @hash   -1713967838
     * @vftbl  9
     * @symbol ?fork@XoroshiroRandom@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class IRandom> fork();
    /**
     * @hash   1269415600
     * @vftbl  10
     * @symbol ?forkPositional@XoroshiroRandom@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

};