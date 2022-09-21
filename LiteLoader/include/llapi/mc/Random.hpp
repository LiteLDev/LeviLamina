/**
 * @file  MC/Random.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Random.
 *
 */
class Random {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOM
public:
    class Random& operator=(class Random const &) = delete;
    Random(class Random const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOM
    /**
     * @hash   1491417811
     * @symbol ?consumeCount@Random@@UEAAXI@Z
     */
    MCVAPI void consumeCount(unsigned int);
    /**
     * @hash   -830901249
     * @symbol ?fork@Random@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
     */
    MCVAPI std::unique_ptr<class IRandom> fork();
    /**
     * @hash   408707419
     * @symbol ?nextBoolean@Random@@UEAA_NXZ
     */
    MCVAPI bool nextBoolean();
    /**
     * @hash   750000891
     * @symbol ?nextDouble@Random@@UEAANXZ
     */
    MCVAPI double nextDouble();
    /**
     * @hash   -218167515
     * @symbol ?nextFloat@Random@@UEAAMXZ
     */
    MCVAPI float nextFloat();
    /**
     * @hash   -662129562
     * @symbol ?nextGaussianDouble@Random@@UEAANXZ
     */
    MCVAPI double nextGaussianDouble();
    /**
     * @hash   -348121782
     * @symbol ?nextInt@Random@@UEAAHH@Z
     */
    MCVAPI int nextInt(int);
    /**
     * @hash   1663920693
     * @symbol ?nextInt@Random@@UEAAHXZ
     */
    MCVAPI int nextInt();
    /**
     * @hash   -741709422
     * @symbol ?nextLong@Random@@UEAA_JXZ
     */
    MCVAPI __int64 nextLong();
    /**
     * @hash   1467770228
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Random();
#endif
    /**
     * @hash   -395905489
     * @symbol ??0Random@@QEAA@XZ
     */
    MCAPI Random();
    /**
     * @hash   2136945963
     * @symbol ??0Random@@QEAA@I_N@Z
     */
    MCAPI Random(unsigned int, bool);
    /**
     * @hash   -1857808250
     * @symbol ?nextGaussianFloat@Random@@QEAAMXZ
     */
    MCAPI float nextGaussianFloat();
    /**
     * @hash   183144339
     * @symbol ?nextGaussianInt@Random@@QEAAHH@Z
     */
    MCAPI int nextGaussianInt(int);
    /**
     * @hash   -723926480
     * @symbol ?nextInt@Random@@QEAAHHH@Z
     */
    MCAPI int nextInt(int, int);
    /**
     * @hash   -1679866910
     * @symbol ?nextIntInclusive@Random@@QEAAHHH@Z
     */
    MCAPI int nextIntInclusive(int, int);
    /**
     * @hash   1502166420
     * @symbol ?getThreadLocal@Random@@SAAEAV1@XZ
     */
    MCAPI static class Random & getThreadLocal();

//private:

private:
    /**
     * @hash   -1331688691
     * @symbol ?mThreadLocalRandom@Random@@0V?$ThreadLocalObject@VRandom@@V?$allocator@VRandom@@@std@@@Threading@Bedrock@@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random, class std::allocator<class Random>> mThreadLocalRandom;

};