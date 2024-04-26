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
    uint   mSeed;                           // this+0x8
    uint   _mt[624];                        // this+0xC
    int    _mti;                            // this+0x9CC
    bool   mHaveNextNextGaussian;           // this+0x9D0
    float  mNextNextGaussian;               // this+0x9D4
    bool   mHaveNextNextGaussianDouble;     // this+0x9D8
    double mNextNextGaussianDouble;         // this+0x9E0
    int    mInitedIdx;                      // this+0x9E8
    uint   mFakeUniformRandomInt;           // this+0x9EC
    bool   mTest_OnlyUsedDeterministically; // this+0x9F0

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Random@Core@@UEAA@XZ
    virtual ~Random();

    // vIndex: 1, symbol: ?nextInt@Random@Core@@UEAAHXZ
    virtual int nextInt();

    // vIndex: 2, symbol: ?nextInt@Random@Core@@UEAAHH@Z
    virtual int nextInt(int n);

    // vIndex: 3, symbol: ?nextLong@Random@Core@@UEAA_JXZ
    virtual int64 nextLong();

    // vIndex: 4, symbol: ?nextBoolean@Random@Core@@UEAA_NXZ
    virtual bool nextBoolean();

    // vIndex: 5, symbol: ?nextFloat@Random@Core@@UEAAMXZ
    virtual float nextFloat();

    // vIndex: 6, symbol: ?nextDouble@Random@Core@@UEAANXZ
    virtual double nextDouble();

    // vIndex: 7, symbol: ?nextGaussianDouble@Random@Core@@UEAANXZ
    virtual double nextGaussianDouble();

    // vIndex: 8, symbol: ?consumeCount@Random@Core@@UEAAXI@Z
    virtual void consumeCount(uint count);

    // vIndex: 9, symbol: ?fork@Random@Core@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    virtual std::unique_ptr<class IRandom> fork();

    // symbol: ??0Random@Core@@QEAA@I_N@Z
    MCAPI Random(uint, bool);

    // symbol: ?nextGaussian@Random@Core@@QEAAMXZ
    MCAPI float nextGaussian();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_genRandInt32@Random@Core@@AEAAIXZ
    MCAPI uint _genRandInt32();

    // symbol: ?_genUniformRandomInt@Random@Core@@AEAAIXZ
    MCAPI uint _genUniformRandomInt();

    // symbol: ?_setSeed@Random@Core@@AEAAXI@Z
    MCAPI void _setSeed(uint);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mFixed@Random@Core@@0U?$atomic@I@std@@A
    MCAPI static std::atomic<uint> mFixed;

    // symbol: ?mFixedGaussian@Random@Core@@0U?$atomic@M@std@@A
    MCAPI static std::atomic<float> mFixedGaussian;

    // symbol: ?mFixedUInt32@Random@Core@@0U?$atomic@I@std@@A
    MCAPI static std::atomic<uint> mFixedUInt32;

    // symbol: ?mRandomDevice@Random@Core@@0Vrandom_device@std@@A
    MCAPI static std::random_device mRandomDevice;

    // symbol:
    // ?mThreadLocalRandom@Random@Core@@0V?$ThreadLocalObject@VRandom@Core@@V?$allocator@VRandom@Core@@@std@@@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Core::Random> mThreadLocalRandom;

    // symbol: ?mUnfixed@Random@Core@@0U?$atomic@I@std@@A
    MCAPI static std::atomic<uint> mUnfixed;

    // NOLINTEND
};

}; // namespace Core
