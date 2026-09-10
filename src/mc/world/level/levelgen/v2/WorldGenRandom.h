#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#include "mc/util/SimpleRandom.h"
#include "mc/util/random/XoroshiroRandom.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IPositionalRandomFactory;
// clang-format on

namespace br::worldgen {

struct WorldGenRandom : public ::IRandom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::std::variant<::SimpleRandom, ::XoroshiroRandom>> mSource;
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::br::worldgen::WorldGenRandom forkPositional(::BlockPos pos);

    MCAPI ::br::worldgen::WorldGenRandom& setDecorationSeed(int64 seed, int chunkX, int chunkZ);

    MCAPI ::br::worldgen::WorldGenRandom& setLargeFeatureSeed(int64 seed, int chunkX, int chunkZ);
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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
