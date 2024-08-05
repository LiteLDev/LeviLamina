#pragma once

#include "mc/_HeaderOutputPredefine.h"

class XoroshiroRandom {
public:
    // prevent constructor by default
    XoroshiroRandom& operator=(XoroshiroRandom const&);
    XoroshiroRandom(XoroshiroRandom const&);
    XoroshiroRandom();

public:
    // NOLINTBEGIN
    MCVAPI void consumeCount(uint rounds);

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

    MCVAPI void setSeed(struct Seed128Bit);

    MCVAPI void setSeed(int64);

    MCVAPI ~XoroshiroRandom();

    // NOLINTEND
};
