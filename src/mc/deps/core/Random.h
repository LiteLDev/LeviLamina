#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

namespace Core {

class Random {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_RANDOM
public:
    Random& operator=(Random const&) = delete;
    Random(Random const&)            = delete;
    Random()                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?nextInt\@Random\@Core\@\@UEAAHXZ
     */
    virtual int nextInt();
    /**
     * @vftbl 2
     * @symbol ?nextInt\@Random\@Core\@\@UEAAHH\@Z
     */
    virtual int nextInt(int);
    /**
     * @vftbl 3
     * @symbol ?nextLong\@Random\@Core\@\@UEAA_JXZ
     */
    virtual __int64 nextLong();
    /**
     * @vftbl 4
     * @symbol ?nextBoolean\@Random\@Core\@\@UEAA_NXZ
     */
    virtual bool nextBoolean();
    /**
     * @vftbl 5
     * @symbol ?nextFloat\@Random\@Core\@\@UEAAMXZ
     */
    virtual float nextFloat();
    /**
     * @vftbl 6
     * @symbol ?nextDouble\@Random\@Core\@\@UEAANXZ
     */
    virtual double nextDouble();
    /**
     * @vftbl 7
     * @symbol ?nextGaussianDouble\@Random\@Core\@\@UEAANXZ
     */
    virtual double nextGaussianDouble();
    /**
     * @vftbl 8
     * @symbol ?consumeCount\@Random\@Core\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int);
    /**
     * @vftbl 9
     * @symbol
     * ?fork\@Random\@Core\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORE_RANDOM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Random();
#endif
    /**
     * @symbol ??0Random\@Core\@\@QEAA\@I_N\@Z
     */
    MCAPI Random(unsigned int, bool);
    /**
     * @symbol ?nextGaussian\@Random\@Core\@\@QEAAMXZ
     */
    MCAPI float nextGaussian();

    // private:
    /**
     * @symbol ?_genRandInt32\@Random\@Core\@\@AEAAIXZ
     */
    MCAPI unsigned int _genRandInt32();
    /**
     * @symbol ?_genUniformRandomInt\@Random\@Core\@\@AEAAIXZ
     */
    MCAPI unsigned int _genUniformRandomInt();
    /**
     * @symbol ?_setSeed\@Random\@Core\@\@AEAAXI\@Z
     */
    MCAPI void _setSeed(unsigned int);

private:
    /**
     * @symbol ?mFixed\@Random\@Core\@\@0U?$atomic\@I\@std\@\@A
     */
    MCAPI static struct std::atomic<unsigned int> mFixed;
    /**
     * @symbol ?mFixedGaussian\@Random\@Core\@\@0U?$atomic\@M\@std\@\@A
     */
    MCAPI static struct std::atomic<float> mFixedGaussian;
    /**
     * @symbol ?mFixedUInt32\@Random\@Core\@\@0U?$atomic\@I\@std\@\@A
     */
    MCAPI static struct std::atomic<unsigned int> mFixedUInt32;
    /**
     * @symbol ?mRandomDevice\@Random\@Core\@\@0Vrandom_device\@std\@\@A
     */
    MCAPI static class std::random_device mRandomDevice;
    /**
     * @symbol
     * ?mThreadLocalRandom\@Random\@Core\@\@0V?$ThreadLocalObject\@VRandom\@Core\@\@V?$allocator\@VRandom\@Core\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::
        ThreadLocalObject<class Core::Random, class std::allocator<class Core::Random>>
            mThreadLocalRandom;
    /**
     * @symbol ?mUnfixed\@Random\@Core\@\@0U?$atomic\@I\@std\@\@A
     */
    MCAPI static struct std::atomic<unsigned int> mUnfixed;
};

}; // namespace Core
