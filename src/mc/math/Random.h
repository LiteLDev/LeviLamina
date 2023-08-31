#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"
#include "mc/math/IRandom.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
class IRandom;
// clang-format on

namespace Core {

class Random : public ::IRandom {

public:
    uint32_t mSeed;                           // this+0x8
    uint32_t _mt[624];                        // this+0xC
    int32_t          _mti;                            // this+0x9CC
    bool         mHaveNextNextGaussian;           // this+0x9D0
    float        mNextNextGaussian;               // this+0x9D4
    bool         mHaveNextNextGaussianDouble;     // this+0x9D8
    double       mNextNextGaussianDouble;         // this+0x9E0
    int32_t          mInitedIdx;                      // this+0x9E8
    uint32_t mFakeUniformRandomInt;           // this+0x9EC
    bool         mTest_OnlyUsedDeterministically; // this+0x9F0

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_destructor_-1
     */
    virtual ~Random();
    /**
     * @vftbl 1
     * @symbol ?nextInt\@Random\@Core\@\@UEAAHXZ
     */
    virtual int32_t nextInt();
    /**
     * @vftbl 2
     * @symbol ?nextInt\@Random\@Core\@\@UEAAHH\@Z
     */
    virtual int32_t nextInt(int32_t);
    /**
     * @vftbl 3
     * @symbol ?nextLong\@Random\@Core\@\@UEAA_JXZ
     */
    virtual int64_t nextLong();
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
    virtual void consumeCount(uint32_t);
    /**
     * @vftbl 9
     * @symbol
     * ?fork\@Random\@Core\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork();
    /**
     * @symbol ??0Random\@Core\@\@QEAA\@I_N\@Z
     */
    MCAPI Random(uint32_t, bool);
    /**
     * @symbol ?nextGaussian\@Random\@Core\@\@QEAAMXZ
     */
    MCAPI float nextGaussian();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_genRandInt32\@Random\@Core\@\@AEAAIXZ
     */
    MCAPI uint32_t _genRandInt32();
    /**
     * @symbol ?_genUniformRandomInt\@Random\@Core\@\@AEAAIXZ
     */
    MCAPI uint32_t _genUniformRandomInt();
    /**
     * @symbol ?_setSeed\@Random\@Core\@\@AEAAXI\@Z
     */
    MCAPI void _setSeed(uint32_t);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mFixed\@Random\@Core\@\@0U?$atomic\@I\@std\@\@A
     */
    MCAPI static std::atomic<uint32_t> mFixed;
    /**
     * @symbol ?mFixedGaussian\@Random\@Core\@\@0U?$atomic\@M\@std\@\@A
     */
    MCAPI static std::atomic<float> mFixedGaussian;
    /**
     * @symbol ?mFixedUInt32\@Random\@Core\@\@0U?$atomic\@I\@std\@\@A
     */
    MCAPI static std::atomic<uint32_t> mFixedUInt32;
    /**
     * @symbol ?mRandomDevice\@Random\@Core\@\@0Vrandom_device\@std\@\@A
     */
    MCAPI static std::random_device mRandomDevice;
    /**
     * @symbol
     * ?mThreadLocalRandom\@Random\@Core\@\@0V?$ThreadLocalObject\@VRandom\@Core\@\@V?$allocator\@VRandom\@Core\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Core::Random, std::allocator<class Core::Random>>
        mThreadLocalRandom;
    /**
     * @symbol ?mUnfixed\@Random\@Core\@\@0U?$atomic\@I\@std\@\@A
     */
    MCAPI static std::atomic<uint32_t> mUnfixed;
    // NOLINTEND
};

}; // namespace Core
