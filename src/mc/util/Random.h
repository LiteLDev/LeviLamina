#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/ThreadOwner.h"
#include "mc/math/Random.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

class Random : public IRandom, public Bedrock::EnableNonOwnerReferences {
public:
    Bedrock::Application::ThreadOwner<Core::Random> mRandom; // this+0x20

    // prevent constructor by default
    Random& operator=(Random const&);
    Random(Random const&);

public:
    // NOLINTBEGIN
    // symbol: ?consumeCount@Random@@UEAAXI@Z
    MCVAPI void consumeCount(uint count);

    // symbol: ?fork@Random@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class IRandom> fork();

    // symbol: ?nextBoolean@Random@@UEAA_NXZ
    MCVAPI bool nextBoolean();

    // symbol: ?nextDouble@Random@@UEAANXZ
    MCVAPI double nextDouble();

    // symbol: ?nextFloat@Random@@UEAAMXZ
    MCVAPI float nextFloat();

    // symbol: ?nextGaussianDouble@Random@@UEAANXZ
    MCVAPI double nextGaussianDouble();

    // symbol: ?nextInt@Random@@UEAAHXZ
    MCVAPI int nextInt();

    // symbol: ?nextInt@Random@@UEAAHH@Z
    MCVAPI int nextInt(int n);

    // symbol: ?nextLong@Random@@UEAA_JXZ
    MCVAPI int64 nextLong();

    // symbol: ??1Random@@UEAA@XZ
    MCVAPI ~Random();

    // symbol: ??0Random@@QEAA@XZ
    MCAPI Random();

    // symbol: ??0Random@@QEAA@I_N@Z
    MCAPI Random(uint seed, bool);

    // symbol: ?nextFloat@Random@@QEAAMMM@Z
    MCAPI float nextFloat(float, float);

    // symbol: ?nextGaussianFloat@Random@@QEAAMXZ
    MCAPI float nextGaussianFloat();

    // symbol: ?nextGaussianInt@Random@@QEAAHH@Z
    MCAPI int nextGaussianInt(int);

    // symbol: ?nextInt@Random@@QEAAHHH@Z
    MCAPI int nextInt(int min, int max);

    // symbol: ?nextIntInclusive@Random@@QEAAHHH@Z
    MCAPI int nextIntInclusive(int min, int max);

    // symbol: ?getThreadLocal@Random@@SAAEAV1@XZ
    MCAPI static class Random& getThreadLocal();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mThreadLocalRandom@Random@@0V?$ThreadLocalObject@VRandom@@V?$allocator@VRandom@@@std@@@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random> mThreadLocalRandom;

    // NOLINTEND
};
