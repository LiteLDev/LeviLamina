#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#include "mc/platform/threading/ThreadLocalObject.h"

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
    // vIndex: 0
    virtual ~Random();

    // vIndex: 1
    virtual int nextInt();

    // vIndex: 2
    virtual int nextInt(int n);

    // vIndex: 3
    virtual int64 nextLong();

    // vIndex: 4
    virtual bool nextBoolean();

    // vIndex: 5
    virtual float nextFloat();

    // vIndex: 6
    virtual double nextDouble();

    // vIndex: 7
    virtual double nextGaussianDouble();

    // vIndex: 8
    virtual void consumeCount(uint count);

    // vIndex: 9
    virtual std::unique_ptr<class IRandom> fork();

    MCAPI Random(uint, bool);

    MCAPI float nextGaussian();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI uint _genRandInt32();

    MCAPI uint _genUniformRandomInt();

    MCAPI void _setSeed(uint);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::random_device mRandomDevice;

    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Core::Random> mThreadLocalRandom;

    // NOLINTEND
};

}; // namespace Core
