#pragma once

#include "ll/api/base/StdInt.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/WorkerPool.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class Scheduler : public ::Bedrock::EnableNonOwnerReferences {
public:
    int                                   mTotalFrames;
    int                                   mStarvedFrames;
    int                                   mPromotionFrames;
    int                                   mTargetFPS;
    int                                   mEffectiveFPS;
    int                                   mFramesOverBound;
    double                                mAverageCallbackDuration;
    double                                mTotalCoroutineDuration;
    uint64                                mTotalRunCoroutines;
    double                                mCoroutineTimeLimit;
    std::unique_ptr<WorkerPool>           mCoroutinePool;
    std::chrono::steady_clock::time_point mNextStarveCheckTime;
    std::thread::id                       mThreadID;

public:
    // prevent constructor by default
    Scheduler& operator=(Scheduler const&);
    Scheduler(Scheduler const&);
    Scheduler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Scheduler() = default;

    MCAPI Scheduler(std::string name, uint FPS);

    MCAPI void changeThread(std::thread::id);

    MCAPI class WorkerPool& getCoroutinePool();

    MCAPI void processCoroutines(std::chrono::nanoseconds timeSinceSwap, std::chrono::nanoseconds minTimeCap);

    MCAPI void queueCallback(std::shared_ptr<class BackgroundTaskBase> task);

    MCAPI void setTargetFPS(uint FPS);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static float const& AVERAGE_TASK_TOLERANCE();

    // NOLINTEND
};
