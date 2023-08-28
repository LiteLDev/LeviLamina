#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/IRandom.h"

namespace Core {
class Random : public IRandom {
public:
    unsigned int mSeed;                           // this+0x8
    unsigned int _mt[624];                        // this+0xC
    int          _mti;                            // this+0x9CC
    bool         mHaveNextNextGaussian;           // this+0x9D0
    float        mNextNextGaussian;               // this+0x9D4
    bool         mHaveNextNextGaussianDouble;     // this+0x9D8
    double       mNextNextGaussianDouble;         // this+0x9E0
    int          mInitedIdx;                      // this+0x9E8
    unsigned int mFakeUniformRandomInt;           // this+0x9EC
    bool         mTest_OnlyUsedDeterministically; // this+0x9F0

    // NOLINTBEGIN

    virtual ~Random();

    virtual int nextInt();

    virtual int nextInt(int);

    virtual int64_t nextLong();

    virtual bool nextBoolean();

    virtual float nextFloat();

    virtual double nextDouble();

    virtual double nextGaussianDouble();

    virtual void consumeCount(unsigned int);

    virtual std::unique_ptr<class IRandom> fork();


    // static Bedrock::Threading::ThreadLocalObject<Core::Random> mThreadLocalRandom;
    // static std::random_device        mRandomDevice;
    // static std::atomic<unsigned int> mFixed;
    // static std::atomic<unsigned int> mUnfixed;
    // static std::atomic<unsigned int> mFixedUInt32;
    // static std::atomic<float>        mFixedGaussian;

    // NOLINTEND
};
} // namespace Core