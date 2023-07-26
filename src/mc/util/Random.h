#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

class Random {

public:
    // prevent constructor by default
    Random& operator=(Random const&) = delete;
    Random(Random const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOM
    /**
     * @symbol ?consumeCount\@Random\@\@UEAAXI\@Z
     */
    MCVAPI void consumeCount(unsigned int); // NOLINT
    /**
     * @symbol ?fork\@Random\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class IRandom> fork(); // NOLINT
    /**
     * @symbol ?nextBoolean\@Random\@\@UEAA_NXZ
     */
    MCVAPI bool nextBoolean(); // NOLINT
    /**
     * @symbol ?nextDouble\@Random\@\@UEAANXZ
     */
    MCVAPI double nextDouble(); // NOLINT
    /**
     * @symbol ?nextFloat\@Random\@\@UEAAMXZ
     */
    MCVAPI float nextFloat(); // NOLINT
    /**
     * @symbol ?nextGaussianDouble\@Random\@\@UEAANXZ
     */
    MCVAPI double nextGaussianDouble(); // NOLINT
    /**
     * @symbol ?nextInt\@Random\@\@UEAAHH\@Z
     */
    MCVAPI int nextInt(int); // NOLINT
    /**
     * @symbol ?nextInt\@Random\@\@UEAAHXZ
     */
    MCVAPI int nextInt(); // NOLINT
    /**
     * @symbol ?nextLong\@Random\@\@UEAA_JXZ
     */
    MCVAPI __int64 nextLong(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Random(); // NOLINT
#endif
    /**
     * @symbol ??0Random\@\@QEAA\@XZ
     */
    MCAPI Random(); // NOLINT
    /**
     * @symbol ?nextFloat\@Random\@\@QEAAMMM\@Z
     */
    MCAPI float nextFloat(float, float); // NOLINT
    /**
     * @symbol ?nextGaussianFloat\@Random\@\@QEAAMXZ
     */
    MCAPI float nextGaussianFloat(); // NOLINT
    /**
     * @symbol ?nextGaussianInt\@Random\@\@QEAAHH\@Z
     */
    MCAPI int nextGaussianInt(int); // NOLINT
    /**
     * @symbol ?nextInt\@Random\@\@QEAAHHH\@Z
     */
    MCAPI int nextInt(int, int); // NOLINT
    /**
     * @symbol ?nextIntInclusive\@Random\@\@QEAAHHH\@Z
     */
    MCAPI int nextIntInclusive(int, int); // NOLINT
    /**
     * @symbol ?getThreadLocal\@Random\@\@SAAEAV1\@XZ
     */
    MCAPI static class Random& getThreadLocal(); // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?mThreadLocalRandom\@Random\@\@0V?$ThreadLocalObject\@VRandom\@\@V?$allocator\@VRandom\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random, class std::allocator<class Random>>
        mThreadLocalRandom; // NOLINT
};
