#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimpleRandom {
public:
    // prevent constructor by default
    SimpleRandom& operator=(SimpleRandom const&);
    SimpleRandom(SimpleRandom const&);
    SimpleRandom();

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

    MCVAPI ~SimpleRandom();

    MCAPI explicit SimpleRandom(int64 seed);

    // NOLINTEND
};
