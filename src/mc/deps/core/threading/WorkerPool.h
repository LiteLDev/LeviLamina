#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/SmallSet.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::Threading { class Mutex; }
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

class WorkerPool : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    WorkerPool& operator=(WorkerPool const&);
    WorkerPool(WorkerPool const&);
    WorkerPool();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorkerPool();

    MCAPI WorkerPool(std::string name, class Scheduler& owner);

    MCAPI WorkerPool(
        std::string                                       name,
        uint64                                            threadCount,
        class Bedrock::Threading::OSThreadPriority const& priority,
        std::optional<uint64>                             coreAffinityMask,
        bool                                              suppressWorkerProfiling,
        std::optional<int>                                idealCore
    );

    MCAPI void queue(std::shared_ptr<class BackgroundTaskBase> task, bool queueImmediate);

    MCAPI void resortPriorityQueue();

    MCAPI uint64 size() const;

    MCAPI std::shared_ptr<class BackgroundTaskBase> tryPop(int minPriority);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static void _registerPool(class WorkerPool& pool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _checkPendingWork();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string name, class Scheduler& owner);

    MCAPI void* ctor$(
        std::string                                       name,
        uint64                                            threadCount,
        class Bedrock::Threading::OSThreadPriority const& priority,
        std::optional<uint64>                             coreAffinityMask,
        bool                                              suppressWorkerProfiling,
        std::optional<int>                                idealCore
    );

    MCAPI void dtor$();

    MCAPI static class SmallSet<class WorkerPool*>& sAllPools();

    MCAPI static class Bedrock::Threading::Mutex& sAllPoolsMutex();

    // NOLINTEND
};
