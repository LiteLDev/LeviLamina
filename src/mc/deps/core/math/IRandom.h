#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRandom {
public:
    // prevent constructor by default
    IRandom& operator=(IRandom const&);
    IRandom(IRandom const&);
    IRandom();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRandom();

    // vIndex: 1
    virtual int nextInt() = 0;

    // vIndex: 2
    virtual int nextInt(int n) = 0;

    // vIndex: 3
    virtual int64 nextLong() = 0;

    // vIndex: 4
    virtual bool nextBoolean() = 0;

    // vIndex: 5
    virtual float nextFloat() = 0;

    // vIndex: 6
    virtual double nextDouble() = 0;

    // vIndex: 7
    virtual double nextGaussianDouble() = 0;

    // vIndex: 8
    virtual void consumeCount(uint count) = 0;

    // vIndex: 9
    virtual std::unique_ptr<class IRandom> fork() = 0;

    // vIndex: 10
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class IPositionalRandomFactory> forkPositional$();

    // NOLINTEND
};
