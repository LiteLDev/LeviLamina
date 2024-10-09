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
    MCVAPI void consumeCount(uint count);

    MCVAPI std::unique_ptr<class IRandom> fork();

    MCVAPI std::unique_ptr<class IPositionalRandomFactory> forkPositional();

    MCVAPI bool nextBoolean();

    MCVAPI double nextDouble();

    MCVAPI float nextFloat();

    MCVAPI double nextGaussianDouble();

    MCVAPI int nextInt();

    MCVAPI int nextInt(int bound);

    MCVAPI int64 nextLong();

    MCVAPI struct Seed128Bit seed128() const;

    MCVAPI int64 seed64() const;

    MCVAPI void setSeed(struct Seed128Bit seed);

    MCVAPI void setSeed(int64 seed);

    MCVAPI ~WorldGenRandom();

    MCAPI WorldGenRandom();

    MCAPI WorldGenRandom(struct br::worldgen::WorldGenRandom const& other);

    MCAPI struct br::worldgen::WorldGenRandom forkPositional(class BlockPos pos);

    MCAPI struct br::worldgen::WorldGenRandom& setLargeFeatureSeed(int64 seed, int chunkX, int chunkZ);

    MCAPI struct br::worldgen::WorldGenRandom& setLargeFeatureWithSalt(int64 seed, int x, int z, int blend);

    MCAPI static struct br::worldgen::WorldGenRandom create(int64 seed);

    // NOLINTEND
};

}; // namespace br::worldgen
