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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool nextBoolean() /*override*/;

    // vIndex: 5
    virtual float nextFloat() /*override*/;

    // vIndex: 6
    virtual double nextDouble() /*override*/;

    // vIndex: 2
    virtual int nextInt() /*override*/;

    // vIndex: 1
    virtual int nextInt(int n) /*override*/;

    // vIndex: 3
    virtual int64 nextLong() /*override*/;

    // vIndex: 8
    virtual void consumeCount(uint count) /*override*/;

    // vIndex: 7
    virtual double nextGaussianDouble() /*override*/;

    // vIndex: 9
    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;

    // vIndex: 0
    virtual ~Random() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Random();

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
    MCAPI void* $ctor();

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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
