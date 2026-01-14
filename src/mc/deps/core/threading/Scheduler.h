#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
// clang-format on

class Scheduler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // Scheduler inner types declare
    // clang-format off
    class ScopedChangeScheduler;
    // clang-format on

    // Scheduler inner types define
    enum class MaximumTimeBudget : int {
        Yes = 0,
        No  = 1,
    };

    enum class MinimumTimeBudget : int {
        Yes = 0,
        No  = 1,
    };

    class ScopedChangeScheduler {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk3a05ca;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopedChangeScheduler& operator=(ScopedChangeScheduler const&);
        ScopedChangeScheduler(ScopedChangeScheduler const&);
        ScopedChangeScheduler();
    };

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
#ifdef LL_PLAT_S
    virtual ~Scheduler() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~Scheduler() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Scheduler(::std::string name, uint FPS);

    MCAPI ::std::chrono::nanoseconds _calcBaseTimeBudget(
        uint                           forFps,
        ::std::chrono::nanoseconds     frameTimeSoFar,
        ::Scheduler::MinimumTimeBudget ensureNonZeroRunTime,
        ::Scheduler::MaximumTimeBudget limitMaxRunTime
    );

    MCAPI bool _runCoroutines(::std::chrono::nanoseconds timeCap, ::std::function<bool()> const& earlyExit);

    MCAPI void processCoroutines(
        ::std::chrono::nanoseconds     timeSinceSwap,
        ::Scheduler::MinimumTimeBudget ensureNonZeroRunTime,
        ::Scheduler::MaximumTimeBudget limitMaxRunTime,
        ::std::function<bool()> const& earlyExit
    );

    MCAPI void setTargetFPS(uint FPS);

    MCAPI void updateTargetFPS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string name, uint FPS);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
