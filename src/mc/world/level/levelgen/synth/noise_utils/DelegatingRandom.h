#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"

namespace NoiseUtils {

class DelegatingRandom : public ::IRandom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IRandom&> mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    DelegatingRandom& operator=(DelegatingRandom const&);
    DelegatingRandom(DelegatingRandom const&);
    DelegatingRandom();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int nextInt() /*override*/;

    virtual int nextInt(int const bound) /*override*/;

    virtual int64 nextLong() /*override*/;

    virtual bool nextBoolean() /*override*/;

    virtual float nextFloat() /*override*/;

    virtual double nextDouble() /*override*/;

    virtual double nextGaussianDouble() /*override*/;

    virtual void consumeCount(uint count) /*override*/;

    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;

    virtual ~DelegatingRandom() /*override*/ = default;
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
