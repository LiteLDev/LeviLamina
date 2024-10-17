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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForIRandom();

    MCAPI static void** vftableForIRandomSeeded();

    MCAPI void* ctor$(int64 seed);

    MCAPI void dtor$();

    MCAPI void consumeCount$(uint count);

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
