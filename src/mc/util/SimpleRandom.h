#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#include "mc/deps/core/math/IRandomSeeded.h"
#include "mc/util/random/MarsagliaPolarGaussian.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
struct Seed128Bit;
// clang-format on

class SimpleRandom : public ::IRandom, public ::IRandomSeeded {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64>                     mSeed;
    ::ll::TypedStorage<8, 16, ::MarsagliaPolarGaussian> mGaussianSource;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int nextInt() /*override*/;

    virtual int nextInt(int bound) /*override*/;

    virtual int64 nextLong() /*override*/;

    virtual bool nextBoolean() /*override*/;

    virtual float nextFloat() /*override*/;

    virtual double nextDouble() /*override*/;

    virtual double nextGaussianDouble() /*override*/;

    virtual void consumeCount(uint count) /*override*/;

    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;

    virtual ::std::unique_ptr<::IPositionalRandomFactory> forkPositional() /*override*/;

    virtual void setSeed(int64 seed) /*override*/;

    virtual void setSeed(::Seed128Bit seed) /*override*/;

    virtual int64 seed64() const /*override*/;

    virtual ::Seed128Bit seed128() const /*override*/;

    virtual ~SimpleRandom() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $nextInt();

    MCAPI int $nextInt(int bound);

    MCAPI int64 $nextLong();

    MCAPI bool $nextBoolean();

    MCAPI float $nextFloat();

    MCAPI double $nextDouble();

    MCAPI double $nextGaussianDouble();

    MCAPI void $consumeCount(uint count);

    MCAPI ::std::unique_ptr<::IRandom> $fork();

    MCAPI ::std::unique_ptr<::IPositionalRandomFactory> $forkPositional();

    MCAPI void $setSeed(int64 seed);

    MCAPI void $setSeed(::Seed128Bit seed);

    MCFOLD int64 $seed64() const;

    MCAPI ::Seed128Bit $seed128() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIRandomSeeded();

    MCNAPI static void** $vftableForIRandom();
    // NOLINTEND
};
