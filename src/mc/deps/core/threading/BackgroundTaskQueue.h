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
    ::ll::UntypedStorage<8, 80> mUnk1c3882;
    ::ll::UntypedStorage<8, 80> mUnk34fd6a;
    ::ll::UntypedStorage<8, 80> mUnka498a2;
    ::ll::UntypedStorage<8, 8>  mUnkf87f35;
    ::ll::UntypedStorage<1, 1>  mUnk681617;
    ::ll::UntypedStorage<8, 80> mUnk75b36f;
    ::ll::UntypedStorage<8, 24> mUnkcae1da;
    // NOLINTEND

public:
    // prevent constructor by default
    BackgroundTaskQueue& operator=(BackgroundTaskQueue const&);
    BackgroundTaskQueue(BackgroundTaskQueue const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BackgroundTaskQueue();

    MCNAPI bool _fetchAllAvailableTasks();

    MCNAPI void flush();

    MCNAPI void queue(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate);

    MCNAPI ::std::shared_ptr<::BackgroundTaskBase> tryPop(int minPriority);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
