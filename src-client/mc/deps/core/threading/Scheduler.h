#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
struct WorkerPool;
// clang-format on

class Scheduler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // Scheduler inner types declare
    // clang-format off
    struct ScopedChangeScheduler;
    // clang-format on

    // Scheduler inner types define
    struct ScopedChangeScheduler {};

    enum class MinimumTimeBudget : uint {};

    enum class MaximumTimeBudget : uint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                    mTotalFrames;
    ::ll::TypedStorage<4, 4, uint>                                    mStarvedFrames;
    ::ll::TypedStorage<4, 4, uint>                                    mPromotionFrames;
    ::ll::TypedStorage<4, 4, uint>                                    mTargetFPS;
    ::ll::TypedStorage<4, 4, uint>                                    mEffectiveFPS;
    ::ll::TypedStorage<4, 4, uint>                                    mTotalRunCoroutines;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              mPredictedCoroutineDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              mTotalCoroutineDuration;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorkerPool>>         mCoroutinePool;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextStarveCheckTime;
    ::ll::TypedStorage<4, 4, ::std::thread::id>                       mThreadID;
    // NOLINTEND

public:
    // prevent constructor by default
    Scheduler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Scheduler() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Scheduler(::std::string name, uint FPS);

    MCNAPI ::std::chrono::nanoseconds _calcBaseTimeBudget(
        uint                           forFps,
        ::std::chrono::nanoseconds     frameTimeSoFar,
        ::Scheduler::MinimumTimeBudget ensureNonZeroRunTime,
        ::Scheduler::MaximumTimeBudget limitMaxRunTime
    );

    MCNAPI bool _runCoroutines(::std::chrono::nanoseconds timeCap, ::std::function<bool()> const& earlyExit);

    MCNAPI void processCoroutines(
        ::std::chrono::nanoseconds     timeSinceSwap,
        ::Scheduler::MinimumTimeBudget ensureNonZeroRunTime,
        ::Scheduler::MaximumTimeBudget limitMaxRunTime,
        ::std::function<bool()> const& earlyExit
    );

    MCNAPI void setTargetFPS(uint FPS);

    MCNAPI void updateTargetFPS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string name, uint FPS);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
