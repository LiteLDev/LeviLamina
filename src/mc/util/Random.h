#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/application/common/utility/ThreadOwner.h"
#include "mc/deps/core/math/Random.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated inclusion list
#include "mc/platform/threading/ThreadLocalObject.h"

class Random : public IRandom, public Bedrock::EnableNonOwnerReferences {
public:
    Bedrock::Application::ThreadOwner<Core::Random> mRandom; // this+0x20

    // prevent constructor by default
    Random& operator=(Random const&);
    Random(Random const&);

public:
    // NOLINTBEGIN
    MCVAPI void consumeCount(uint count);

    MCVAPI std::unique_ptr<class IRandom> fork();

    MCVAPI bool nextBoolean();

    MCVAPI double nextDouble();

    MCVAPI float nextFloat();

    MCVAPI double nextGaussianDouble();

    MCVAPI int nextInt();

    MCVAPI int nextInt(int n);

    MCVAPI int64 nextLong();

    MCVAPI ~Random();

    MCAPI Random();

    MCAPI Random(uint seed, bool onlyUsedDeterministically);

    MCAPI float nextFloat(float, float);

    MCAPI float nextGaussianFloat();

    MCAPI int nextGaussianInt(int);

    MCAPI int nextInt(int min, int max);

    MCAPI int nextIntInclusive(int min, int max);

    MCAPI static class Random& getThreadLocal();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** vftableForIRandom();

    MCAPI void* ctor$();

    MCAPI void* ctor$(uint seed, bool onlyUsedDeterministically);

    MCAPI void dtor$();

    MCAPI void consumeCount$(uint count);

    MCAPI std::unique_ptr<class IRandom> fork$();

    MCAPI bool nextBoolean$();

    MCAPI double nextDouble$();

    MCAPI float nextFloat$();

    MCAPI double nextGaussianDouble$();

    MCAPI int nextInt$();

    MCAPI int nextInt$(int n);

    MCAPI int64 nextLong$();

    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random>& mThreadLocalRandom();

    // NOLINTEND
};
