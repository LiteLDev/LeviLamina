#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
// clang-format on

class IRandom {
public:
    // prevent constructor by default
    IRandom& operator=(IRandom const&);
    IRandom(IRandom const&);
    IRandom();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRandom();

    // vIndex: 2
    virtual int nextInt() = 0;

    // vIndex: 1
    virtual int nextInt(int) = 0;

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
    virtual void consumeCount(uint) = 0;

    // vIndex: 9
    virtual ::std::unique_ptr<::IRandom> fork() = 0;

    // vIndex: 10
    virtual ::std::unique_ptr<::IPositionalRandomFactory> forkPositional();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::IPositionalRandomFactory> $forkPositional();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
