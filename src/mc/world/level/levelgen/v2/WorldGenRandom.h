#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#include "mc/deps/core/math/IRandomSeeded.h"
#include "mc/util/SimpleRandom.h"
#include "mc/util/random/XoroshiroRandom.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IPositionalRandomFactory;
class SimpleRandom;
class XoroshiroRandom;
struct Seed128Bit;
// clang-format on

namespace br::worldgen {

struct WorldGenRandom : public ::IRandom, public ::IRandomSeeded {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::variant<::SimpleRandom, ::XoroshiroRandom>> mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenRandom();

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

    virtual ~WorldGenRandom() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldGenRandom(::SimpleRandom source);

    MCAPI ::br::worldgen::WorldGenRandom forkPositional(::BlockPos pos);

    MCAPI ::br::worldgen::WorldGenRandom& setLargeFeatureSeed(int64 seed, int chunkX, int chunkZ);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::WorldGenRandom createDecoration(int64 seed, int chunkX, int chunkZ);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SimpleRandom source);
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

    MCAPI void $consumeCount(uint count);

    MCAPI ::std::unique_ptr<::IRandom> $fork();

    MCFOLD ::std::unique_ptr<::IPositionalRandomFactory> $forkPositional();

    MCAPI void $setSeed(int64 seed);

    MCAPI void $setSeed(::Seed128Bit seed);

    MCAPI int64 $seed64() const;

    MCAPI ::Seed128Bit $seed128() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIRandom();

    MCNAPI static void** $vftableForIRandomSeeded();
    // NOLINTEND
};

} // namespace br::worldgen
