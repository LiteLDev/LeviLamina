#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"

namespace Core {

class Random : public ::IRandom {
public:
    // Random inner types define
    using result_type = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         mSeed;
    ::ll::TypedStorage<4, 2496, uint[624]> _mt;
    ::ll::TypedStorage<4, 4, int>          _mti;
    ::ll::TypedStorage<4, 4, int>          mInitedIdx;
    ::ll::TypedStorage<4, 4, float>        mNextNextGaussian;
    ::ll::TypedStorage<8, 8, double>       mNextNextGaussianDouble;
    ::ll::TypedStorage<4, 4, uint>         mFakeUniformRandomInt;
    ::ll::TypedStorage<1, 1, bool>         mHaveNextNextGaussian;
    ::ll::TypedStorage<1, 1, bool>         mHaveNextNextGaussianDouble;
    ::ll::TypedStorage<1, 1, bool>         mTest_OnlyUsedDeterministically;
    // NOLINTEND

public:
    // prevent constructor by default
    Random();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool nextBoolean() /*override*/;

    virtual float nextFloat() /*override*/;

    virtual double nextDouble() /*override*/;

    virtual int nextInt() /*override*/;

    virtual int nextInt(int n) /*override*/;

    virtual int64 nextLong() /*override*/;

    virtual void consumeCount(uint count) /*override*/;

    virtual double nextGaussianDouble() /*override*/;

    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;

    virtual ~Random() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Random(uint seed, bool onlyUsedDeterministically);

    MCAPI uint _genRandInt32();

    MCAPI float nextGaussian();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::random_device& mRandomDevice();

    MCAPI static ::Core::Random& mThreadLocalRandom();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint seed, bool onlyUsedDeterministically);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $nextBoolean();

    MCAPI float $nextFloat();

    MCAPI double $nextDouble();

    MCAPI int $nextInt();

    MCAPI int $nextInt(int n);

    MCAPI int64 $nextLong();

    MCAPI void $consumeCount(uint count);

    MCAPI double $nextGaussianDouble();

    MCAPI ::std::unique_ptr<::IRandom> $fork();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
