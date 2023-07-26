#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

namespace Core {

class Random {

public:
    // prevent constructor by default
    Random& operator=(Random const&) = delete;
    Random(Random const&)            = delete;
    Random()                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?nextInt\@Random\@Core\@\@UEAAHXZ
     */
    virtual int nextInt(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?nextInt\@Random\@Core\@\@UEAAHH\@Z
     */
    virtual int nextInt(int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?nextLong\@Random\@Core\@\@UEAA_JXZ
     */
    virtual __int64 nextLong(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?nextBoolean\@Random\@Core\@\@UEAA_NXZ
     */
    virtual bool nextBoolean(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?nextFloat\@Random\@Core\@\@UEAAMXZ
     */
    virtual float nextFloat(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?nextDouble\@Random\@Core\@\@UEAANXZ
     */
    virtual double nextDouble(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?nextGaussianDouble\@Random\@Core\@\@UEAANXZ
     */
    virtual double nextGaussianDouble(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?consumeCount\@Random\@Core\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int); // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?fork\@Random\@Core\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORE_RANDOM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Random(); // NOLINT
#endif
    /**
     * @symbol ??0Random\@Core\@\@QEAA\@I_N\@Z
     */
    MCAPI Random(unsigned int, bool); // NOLINT
    /**
     * @symbol ?nextGaussian\@Random\@Core\@\@QEAAMXZ
     */
    MCAPI float nextGaussian(); // NOLINT

    // private:
    /**
     * @symbol ?_genRandInt32\@Random\@Core\@\@AEAAIXZ
     */
    MCAPI unsigned int _genRandInt32(); // NOLINT
    /**
     * @symbol ?_genUniformRandomInt\@Random\@Core\@\@AEAAIXZ
     */
    MCAPI unsigned int _genUniformRandomInt(); // NOLINT
    /**
     * @symbol ?_setSeed\@Random\@Core\@\@AEAAXI\@Z
     */
    MCAPI void _setSeed(unsigned int); // NOLINT

private:
    /**
     * @symbol ?mFixed\@Random\@Core\@\@0U?$atomic\@I\@std\@\@A
     */
    MCAPI static struct std::atomic<unsigned int> mFixed; // NOLINT
    /**
     * @symbol ?mFixedGaussian\@Random\@Core\@\@0U?$atomic\@M\@std\@\@A
     */
    MCAPI static struct std::atomic<float> mFixedGaussian; // NOLINT
    /**
     * @symbol ?mFixedUInt32\@Random\@Core\@\@0U?$atomic\@I\@std\@\@A
     */
    MCAPI static struct std::atomic<unsigned int> mFixedUInt32; // NOLINT
    /**
     * @symbol ?mRandomDevice\@Random\@Core\@\@0Vrandom_device\@std\@\@A
     */
    MCAPI static class std::random_device mRandomDevice; // NOLINT
    /**
     * @symbol
     * ?mThreadLocalRandom\@Random\@Core\@\@0V?$ThreadLocalObject\@VRandom\@Core\@\@V?$allocator\@VRandom\@Core\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::
        ThreadLocalObject<class Core::Random, class std::allocator<class Core::Random>>
            mThreadLocalRandom; // NOLINT
    /**
     * @symbol ?mUnfixed\@Random\@Core\@\@0U?$atomic\@I\@std\@\@A
     */
    MCAPI static struct std::atomic<unsigned int> mUnfixed; // NOLINT
};

}; // namespace Core
