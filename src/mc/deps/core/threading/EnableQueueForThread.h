#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

namespace Bedrock::Threading {

class EnableQueueForThread {
public:
    // prevent constructor by default
    EnableQueueForThread& operator=(EnableQueueForThread const&);
    EnableQueueForThread(EnableQueueForThread const&);
    EnableQueueForThread();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnableQueueForThread();

    MCAPI EnableQueueForThread(class WorkerPool& workerPool, class Scheduler& scheduler, std::string name);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void flushThreadTasks();

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(std::function<void()>&& callback);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class WorkerPool& workerPool, class Scheduler& scheduler, std::string name);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock::Threading
