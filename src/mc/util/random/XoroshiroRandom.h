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

class XoroshiroRandom : public ::IRandom, public ::IRandomSeeded {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka94e01;
    ::ll::UntypedStorage<8, 16> mUnk7653d1;
    // NOLINTEND

public:
    // prevent constructor by default
    XoroshiroRandom& operator=(XoroshiroRandom const&);
    XoroshiroRandom(XoroshiroRandom const&);
    XoroshiroRandom();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual int nextInt() /*override*/;

    // vIndex: 1
    virtual int nextInt(int bound) /*override*/;

    // vIndex: 3
    virtual int64 nextLong() /*override*/;

    // vIndex: 4
    virtual bool nextBoolean() /*override*/;

    // vIndex: 5
    virtual float nextFloat() /*override*/;

    // vIndex: 6
    virtual double nextDouble() /*override*/;

    // vIndex: 7
    virtual double nextGaussianDouble() /*override*/;

    // vIndex: 9
    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;

    // vIndex: 10
    virtual ::std::unique_ptr<::IPositionalRandomFactory> forkPositional() /*override*/;

    // vIndex: 8
    virtual void consumeCount(uint rounds) /*override*/;

    // vIndex: 2
    virtual void setSeed(int64 seed) /*override*/;

    // vIndex: 1
    virtual void setSeed(::Seed128Bit seed) /*override*/;

    // vIndex: 3
    virtual int64 seed64() const /*override*/;

    // vIndex: 4
    virtual ::Seed128Bit seed128() const /*override*/;

    // vIndex: 0
    virtual ~XoroshiroRandom() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

    MCAPI ::std::unique_ptr<::IRandom> $fork();

    MCAPI ::std::unique_ptr<::IPositionalRandomFactory> $forkPositional();

    MCAPI void $consumeCount(uint rounds);

    MCAPI void $setSeed(int64 seed);

    MCAPI void $setSeed(::Seed128Bit seed);

    MCAPI int64 $seed64() const;

    MCAPI ::Seed128Bit $seed128() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIRandom();

    MCAPI static void** $vftableForIRandomSeeded();
    // NOLINTEND
};
