#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#include "mc/deps/core/threading/SPSCQueue.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
// clang-format on

class BackgroundTaskQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk17700f;
    ::ll::UntypedStorage<8, 80> mUnka2b5ae;
    ::ll::UntypedStorage<8, 80> mUnka498a2;
    ::ll::UntypedStorage<8, 8>  mUnkf87f35;
    ::ll::UntypedStorage<1, 1>  mUnk681617;
    ::ll::UntypedStorage<8, 80> mUnk1cc761;
    ::ll::UntypedStorage<8, 24> mUnkcae1da;
    // NOLINTEND

public:
    // prevent constructor by default
    BackgroundTaskQueue& operator=(BackgroundTaskQueue const&);
    BackgroundTaskQueue(BackgroundTaskQueue const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BackgroundTaskQueue();

    MCAPI bool _fetchAllAvailableTasks();

    MCAPI void flush();

    MCFOLD uint64 getApproximateTaskCount() const;

    MCAPI void queue(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate);

    MCAPI void resortPriorityQueue();

    MCAPI ::std::shared_ptr<::BackgroundTaskBase> tryPop(int minPriority);

    MCAPI ~BackgroundTaskQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
