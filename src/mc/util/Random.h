#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#include "mc/deps/core/math/Random.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/util/ThreadOwner.h"

class Random : public ::IRandom, public ::Bedrock::EnableNonOwnerReferences {
public:
    // Random inner types define
    using result_type = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2536, ::Bedrock::Application::ThreadOwner<::Core::Random>> mRandom;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Random() /*override*/;

    // vIndex: 4
    virtual bool nextBoolean() /*override*/;

    // vIndex: 5
    virtual float nextFloat() /*override*/;

    // vIndex: 6
    virtual double nextDouble() /*override*/;

    // vIndex: 2
    virtual int nextInt() /*override*/;

    // vIndex: 1
    virtual int nextInt(int n) /*override*/;

    // vIndex: 3
    virtual int64 nextLong() /*override*/;

    // vIndex: 7
    virtual double nextGaussianDouble() /*override*/;

    // vIndex: 8
    virtual void consumeCount(uint count) /*override*/;

    // vIndex: 9
    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Random();

    MCNAPI Random(uint seed, bool onlyUsedDeterministically);

    MCNAPI float nextFloat(float min, float max);

    MCNAPI int nextInt(int min, int max);

    MCNAPI int nextIntInclusive(int min, int max);

    MCNAPI void setSeed(uint seed);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Random& mThreadLocalRandom();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(uint seed, bool onlyUsedDeterministically);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $nextBoolean();

    MCNAPI float $nextFloat();

    MCNAPI double $nextDouble();

    MCNAPI int $nextInt();

    MCNAPI int $nextInt(int n);

    MCNAPI int64 $nextLong();

    MCNAPI double $nextGaussianDouble();

    MCNAPI void $consumeCount(uint count);

    MCNAPI ::std::unique_ptr<::IRandom> $fork();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForIRandom();
    // NOLINTEND
};
