#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/threading/ThreadLocalObject.h"
#include "mc/util/ThreadOwner.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Random; }
// clang-format on

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
    MCAPI Random();

    MCAPI Random(uint seed, bool onlyUsedDeterministically);

    MCAPI float nextFloat(float min, float max);

    MCAPI int nextIntInclusive(int min, int max);

    MCAPI void setSeed(uint seed);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Random& getThreadLocal();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Threading::ThreadLocalObject<::Random>& mThreadLocalRandom();
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
    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForIRandom();
    // NOLINTEND
};
