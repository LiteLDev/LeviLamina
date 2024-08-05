#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IPositionalRandomFactory;
class IRandom;
struct Seed128Bit;
// clang-format on

namespace br::worldgen {

struct WorldGenRandom {
public:
    // prevent constructor by default
    WorldGenRandom& operator=(WorldGenRandom const&);

public:
    // NOLINTBEGIN
    MCVAPI void consumeCount(uint);

    MCVAPI std::unique_ptr<class IRandom> fork();

    MCVAPI std::unique_ptr<class IPositionalRandomFactory> forkPositional();

    MCVAPI bool nextBoolean();

    MCVAPI double nextDouble();

    MCVAPI float nextFloat();

    MCVAPI double nextGaussianDouble();

    MCVAPI int nextInt();

    MCVAPI int nextInt(int);

    MCVAPI int64 nextLong();

    MCVAPI struct Seed128Bit seed128() const;

    MCVAPI int64 seed64() const;

    MCVAPI void setSeed(struct Seed128Bit);

    MCVAPI void setSeed(int64);

    MCVAPI ~WorldGenRandom();

    MCAPI WorldGenRandom();

    MCAPI WorldGenRandom(struct br::worldgen::WorldGenRandom const&);

    MCAPI struct br::worldgen::WorldGenRandom forkPositional(class BlockPos);

    MCAPI struct br::worldgen::WorldGenRandom& setLargeFeatureSeed(int64, int, int);

    MCAPI struct br::worldgen::WorldGenRandom& setLargeFeatureWithSalt(int64, int, int, int);

    MCAPI static struct br::worldgen::WorldGenRandom create(int64);

    // NOLINTEND
};

}; // namespace br::worldgen
