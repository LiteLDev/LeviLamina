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

    MCVAPI void setSeed(struct Seed128Bit seed);

    MCVAPI void setSeed(int64 seed);

    MCVAPI ~XoroshiroRandom();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForIRandom();

    MCAPI static void** vftableForIRandomSeeded();

    MCAPI void dtor$();

    MCAPI void consumeCount$(uint rounds);

    MCAPI std::unique_ptr<class IRandom> fork$();

    MCAPI std::unique_ptr<class IPositionalRandomFactory> forkPositional$();

    MCAPI bool nextBoolean$();

    MCAPI double nextDouble$();

    MCAPI float nextFloat$();

    MCAPI double nextGaussianDouble$();

    MCAPI int nextInt$();

    MCAPI int nextInt$(int bound);

    MCAPI int64 nextLong$();

    MCAPI struct Seed128Bit seed128$() const;

    MCAPI int64 seed64$() const;

    MCAPI void setSeed$(struct Seed128Bit seed);

    MCAPI void setSeed$(int64 seed);

    // NOLINTEND
};
