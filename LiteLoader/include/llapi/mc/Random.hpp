/**
 * @file  Random.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   1699439715
     * @symbol  ?consumeCount\@Random\@\@UEAAXI\@Z
     */
    MCVAPI void consumeCount(unsigned int);
    /**
     * @hash   -622879345
     * @symbol  ?fork\@Random\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class IRandom> fork();
    /**
     * @hash   616836955
     * @symbol  ?nextBoolean\@Random\@\@UEAA_NXZ
     */
    MCVAPI bool nextBoolean();
    /**
     * @hash   958130427
     * @symbol  ?nextDouble\@Random\@\@UEAANXZ
     */
    MCVAPI double nextDouble();
    /**
     * @hash   -10037979
     * @symbol  ?nextFloat\@Random\@\@UEAAMXZ
     */
    MCVAPI float nextFloat();
    /**
     * @hash   -454000026
     * @symbol  ?nextGaussianDouble\@Random\@\@UEAANXZ
     */
    MCVAPI double nextGaussianDouble();
    /**
     * @hash   -139992246
     * @symbol  ?nextInt\@Random\@\@UEAAHH\@Z
     */
    MCVAPI int nextInt(int);
    /**
     * @hash   1872050229
     * @symbol  ?nextInt\@Random\@\@UEAAHXZ
     */
    MCVAPI int nextInt();
    /**
     * @hash   -533579886
     * @symbol  ?nextLong\@Random\@\@UEAA_JXZ
     */
    MCVAPI __int64 nextLong();
    /**
     * @hash   1675746004
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~Random();
#endif
    /**
     * @hash   -150827425
     * @symbol  ??0Random\@\@QEAA\@XZ
     */
    MCAPI Random();
    /**
     * @hash   -1950045557
     * @symbol  ??0Random\@\@QEAA\@I_N\@Z
     */
    MCAPI Random(unsigned int, bool);
    /**
     * @hash   -1627617602
     * @symbol  ?nextFloat\@Random\@\@QEAAMMM\@Z
     */
    MCAPI float nextFloat(float, float);
    /**
     * @hash   -1647710586
     * @symbol  ?nextGaussianFloat\@Random\@\@QEAAMXZ
     */
    MCAPI float nextGaussianFloat();
    /**
     * @hash   392765347
     * @symbol  ?nextGaussianInt\@Random\@\@QEAAHH\@Z
     */
    MCAPI int nextGaussianInt(int);
    /**
     * @hash   -513336784
     * @symbol  ?nextInt\@Random\@\@QEAAHHH\@Z
     */
    MCAPI int nextInt(int, int);
    /**
     * @hash   -1471168462
     * @symbol  ?nextIntInclusive\@Random\@\@QEAAHHH\@Z
     */
    MCAPI int nextIntInclusive(int, int);
    /**
     * @hash   1721182164
     * @symbol  ?getThreadLocal\@Random\@\@SAAEAV1\@XZ
     */
    MCAPI static class Random & getThreadLocal();

//private:

private:
    /**
     * @hash   -173122467
     * @symbol  ?mThreadLocalRandom\@Random\@\@0V?$ThreadLocalObject\@VRandom\@\@V?$allocator\@VRandom\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random, class std::allocator<class Random>> mThreadLocalRandom;

};