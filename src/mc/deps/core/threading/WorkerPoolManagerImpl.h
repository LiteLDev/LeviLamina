#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/WorkerPoolManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Bedrock { class WorkerPoolManager; }
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

namespace Bedrock {

class WorkerPoolManagerImpl : public ::Bedrock::WorkerPoolManager {
public:
    // WorkerPoolManagerImpl inner types declare
    // clang-format off
    struct PoolEntry;
    // clang-format on

    // WorkerPoolManagerImpl inner types define
    struct PoolEntry {
    public:
        // prevent constructor by default
        PoolEntry& operator=(PoolEntry const&);
        PoolEntry(PoolEntry const&);
        PoolEntry();

    public:
        // NOLINTBEGIN
        MCAPI ~PoolEntry();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    WorkerPoolManagerImpl& operator=(WorkerPoolManagerImpl const&);
    WorkerPoolManagerImpl(WorkerPoolManagerImpl const&);

public:
    // NOLINTBEGIN
    MCVAPI std::shared_ptr<class Bedrock::WorkerPoolHandleInterface> createWorkerPool(
        std::string                                       name,
        uint64                                            threadCount,
        class Bedrock::Threading::OSThreadPriority const& priority,
        std::optional<uint64>                             coreAffinityMask,
        bool                                              suppressWorkerProfiling,
        std::optional<int>                                idealCore
    );

    MCVAPI void init();

    MCVAPI void tick();

    MCAPI WorkerPoolManagerImpl();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForBedrockImplBase();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::shared_ptr<class Bedrock::WorkerPoolHandleInterface> createWorkerPool$(
        std::string                                       name,
        uint64                                            threadCount,
        class Bedrock::Threading::OSThreadPriority const& priority,
        std::optional<uint64>                             coreAffinityMask,
        bool                                              suppressWorkerProfiling,
        std::optional<int>                                idealCore
    );

    MCAPI void init$();

    MCAPI void tick$();

    // NOLINTEND
};

}; // namespace Bedrock
