#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#include "mc/deps/core/math/IRandomSeeded.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
struct Seed128Bit;
// clang-format on

class SimpleRandom : public ::IRandom, public ::IRandomSeeded {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke32ad8;
    ::ll::UntypedStorage<8, 16> mUnk5a2dc7;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleRandom& operator=(SimpleRandom const&);
    SimpleRandom(SimpleRandom const&);
    SimpleRandom();

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
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SimpleRandom(int64 seed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int64 seed);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $nextInt();

    MCNAPI int $nextInt(int bound);

    MCNAPI int64 $nextLong();

    MCNAPI bool $nextBoolean();

    MCNAPI float $nextFloat();

    MCNAPI double $nextDouble();

    MCNAPI double $nextGaussianDouble();

    MCNAPI void $consumeCount(uint count);

    MCNAPI ::std::unique_ptr<::IRandom> $fork();

    MCNAPI ::std::unique_ptr<::IPositionalRandomFactory> $forkPositional();

    MCNAPI void $setSeed(int64 seed);

    MCNAPI void $setSeed(::Seed128Bit seed);

    MCNAPI int64 $seed64() const;

    MCNAPI ::Seed128Bit $seed128() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIRandomSeeded();

    MCNAPI static void** $vftableForIRandom();
    // NOLINTEND
};
