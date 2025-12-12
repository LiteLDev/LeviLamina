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
    virtual int nextInt() /*override*/;

    virtual int nextInt(int bound) /*override*/;

    virtual int64 nextLong() /*override*/;

    virtual bool nextBoolean() /*override*/;

    virtual float nextFloat() /*override*/;

    virtual double nextDouble() /*override*/;

    virtual double nextGaussianDouble() /*override*/;

    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;

    virtual ::std::unique_ptr<::IPositionalRandomFactory> forkPositional() /*override*/;

    virtual void consumeCount(uint rounds) /*override*/;

    virtual void setSeed(int64 seed) /*override*/;

    virtual void setSeed(::Seed128Bit seed) /*override*/;

    virtual int64 seed64() const /*override*/;

    virtual ::Seed128Bit seed128() const /*override*/;

    virtual ~XoroshiroRandom() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint nextInt(uint bound);
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

    MCNAPI ::std::unique_ptr<::IRandom> $fork();

    MCNAPI ::std::unique_ptr<::IPositionalRandomFactory> $forkPositional();

    MCNAPI void $consumeCount(uint rounds);

    MCNAPI void $setSeed(int64 seed);

    MCNAPI void $setSeed(::Seed128Bit seed);

    MCNAPI int64 $seed64() const;

    MCNAPI ::Seed128Bit $seed128() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIRandom();

    MCNAPI static void** $vftableForIRandomSeeded();
    // NOLINTEND
};
