#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"

namespace NoiseUtils {

class DelegatingRandom : public ::IRandom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9d98e9;
    // NOLINTEND

public:
    // prevent constructor by default
    DelegatingRandom& operator=(DelegatingRandom const&);
    DelegatingRandom(DelegatingRandom const&);
    DelegatingRandom();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual int nextInt() /*override*/;

    // vIndex: 1
    virtual int nextInt(int const bound) /*override*/;

    // vIndex: 3
    virtual int64 nextLong() /*override*/;

    // vIndex: 4
    virtual bool nextBoolean() /*override*/;

    // vIndex: 5
    virtual float nextFloat() /*override*/;

    // vIndex: 6
    virtual double nextDouble() /*override*/;

    // vIndex: 7
    virtual double nextGaussianDouble() /*override*/;

    // vIndex: 8
    virtual void consumeCount(uint count) /*override*/;

    // vIndex: 9
    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;

    // vIndex: 0
    virtual ~DelegatingRandom() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $nextInt();

    MCFOLD int $nextInt(int const bound);

    MCFOLD int64 $nextLong();

    MCFOLD bool $nextBoolean();

    MCFOLD double $nextDouble();

    MCAPI double $nextGaussianDouble();

    MCFOLD void $consumeCount(uint count);

    MCFOLD ::std::unique_ptr<::IRandom> $fork();
    // NOLINTEND
};

} // namespace NoiseUtils
