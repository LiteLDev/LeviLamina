#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#include "mc/deps/core/math/Random.h"
#include "mc/util/ThreadOwner.h"

class Random : public ::IRandom {
public:
    // Random inner types define
    using result_type = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2536, ::Bedrock::Application::ThreadOwner<::Core::Random, 0>> mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    Random();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Random() /*override*/ = default;

    virtual bool nextBoolean() /*override*/;

    virtual float nextFloat() /*override*/;

    virtual double nextDouble() /*override*/;

    virtual int nextInt() /*override*/;

    virtual int nextInt(int n) /*override*/;

    virtual int64 nextLong() /*override*/;

    virtual double nextGaussianDouble() /*override*/;

    virtual void consumeCount(uint count) /*override*/;

    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Random(uint seed, bool onlyUsedDeterministically);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Random& mThreadLocalRandom();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint seed, bool onlyUsedDeterministically);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $nextBoolean();

    MCAPI float $nextFloat();

    MCAPI double $nextDouble();

    MCAPI int $nextInt();

    MCAPI int $nextInt(int n);

    MCAPI int64 $nextLong();

    MCAPI double $nextGaussianDouble();

    MCAPI void $consumeCount(uint count);

    MCAPI ::std::unique_ptr<::IRandom> $fork();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
