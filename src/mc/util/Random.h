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
    ::ll::TypedStorage<8, 2552, ::Bedrock::Application::ThreadOwner<::Core::Random, 0>> mRandom;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Random() /*override*/;

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
    MCAPI Random();

    MCAPI Random(uint seed, bool onlyUsedDeterministically);

    MCAPI float nextFloat(float min, float max);

    MCAPI_C float nextGaussianFloat();

    MCAPI int nextInt(int min, int max);

    MCAPI_C ::glm::vec3 nextVec3(float f);

    MCAPI void setSeed(uint seed);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::Random& getThreadLocal();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Random& mThreadLocalRandom();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(uint seed, bool onlyUsedDeterministically);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
