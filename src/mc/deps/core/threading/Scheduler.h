#pragma once

#include "ll/api/base/StdInt.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/WorkerPool.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

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
    // vIndex: 0, symbol: __gen_??1Scheduler@@UEAA@XZ
    virtual ~Scheduler() = default;

    // symbol: ??0Scheduler@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z
    MCAPI Scheduler(std::string name, uint FPS);

    // symbol: ?changeThread@Scheduler@@QEAAXVid@thread@std@@@Z
    MCAPI void changeThread(std::thread::id newOwner);

    // symbol: ?getCoroutinePool@Scheduler@@QEAAAEAVWorkerPool@@XZ
    MCAPI class WorkerPool& getCoroutinePool();

    // symbol: ?processCoroutines@Scheduler@@QEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@0@Z
    MCAPI void processCoroutines(std::chrono::nanoseconds timeSinceSwap, std::chrono::nanoseconds minTimeCap);

    // symbol: ?setTargetFPS@Scheduler@@QEAAXI@Z
    MCAPI void setTargetFPS(uint FPS);

    // symbol: ?AVERAGE_TASK_TOLERANCE@Scheduler@@2MB
    MCAPI static float const AVERAGE_TASK_TOLERANCE;

    // NOLINTEND
};
