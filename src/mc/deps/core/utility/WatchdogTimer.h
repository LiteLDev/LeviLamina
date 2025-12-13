#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TaskResult;
class WorkerPool;
// clang-format on

class WatchdogTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkca7973;
    ::ll::UntypedStorage<8, 40> mUnk29d8f5;
    ::ll::UntypedStorage<8, 8>  mUnk9981f4;
    ::ll::UntypedStorage<8, 64> mUnk52bf64;
    ::ll::UntypedStorage<8, 16> mUnk70ca0a;
    ::ll::UntypedStorage<8, 80> mUnk646dac;
    ::ll::UntypedStorage<1, 1>  mUnk3d77c6;
    ::ll::UntypedStorage<8, 8>  mUnkae7778;
    ::ll::UntypedStorage<1, 1>  mUnk296058;
    ::ll::UntypedStorage<8, 8>  mUnk39e2bf;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogTimer& operator=(WatchdogTimer const&);
    WatchdogTimer(WatchdogTimer const&);
    WatchdogTimer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C WatchdogTimer(
        ::WorkerPool&                                              workerPool,
        ::Scheduler&                                               scheduler,
        ::std::chrono::nanoseconds                                 timeout,
        bool                                                       startPaused,
        ::std::function<::std::chrono::steady_clock::time_point()> timeoutCallback,
        ::std::chrono::nanoseconds                                 deadline,
        bool                                                       assertOnDeadline
    );

    MCNAPI_C void _queueTaskWithoutLock();

    MCNAPI_C ::TaskResult _watchdogTimerThreadRoutine();

    MCNAPI_C void terminateWatchdogTimer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::WorkerPool&                                              workerPool,
        ::Scheduler&                                               scheduler,
        ::std::chrono::nanoseconds                                 timeout,
        bool                                                       startPaused,
        ::std::function<::std::chrono::steady_clock::time_point()> timeoutCallback,
        ::std::chrono::nanoseconds                                 deadline,
        bool                                                       assertOnDeadline
    );
    // NOLINTEND
};
