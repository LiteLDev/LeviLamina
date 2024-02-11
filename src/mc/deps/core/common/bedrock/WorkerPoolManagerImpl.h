#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/WorkerPoolManager.h"

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
        // symbol: ??1PoolEntry@WorkerPoolManagerImpl@Bedrock@@QEAA@XZ
        MCAPI ~PoolEntry();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    WorkerPoolManagerImpl& operator=(WorkerPoolManagerImpl const&);
    WorkerPoolManagerImpl(WorkerPoolManagerImpl const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ?createWorkerPool@WorkerPoolManagerImpl@Bedrock@@UEAA?AV?$shared_ptr@VWorkerPoolHandleInterface@Bedrock@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@_KAEBVOSThreadPriority@Threading@2@V?$optional@_K@4@_NV?$optional@H@4@@Z
    MCVAPI std::shared_ptr<class Bedrock::WorkerPoolHandleInterface> createWorkerPool(
        std::string                                       name,
        uint64                                            threadCount,
        class Bedrock::Threading::OSThreadPriority const& priority,
        std::optional<uint64>                             coreAffinityMask,
        bool                                              suppressWorkerProfiling,
        std::optional<int>                                idealCore
    );

    // symbol: ?init@WorkerPoolManagerImpl@Bedrock@@UEAAXXZ
    MCVAPI void init();

    // symbol: ?tick@WorkerPoolManagerImpl@Bedrock@@UEAAXXZ
    MCVAPI void tick();

    // symbol: ??0WorkerPoolManagerImpl@Bedrock@@QEAA@XZ
    MCAPI WorkerPoolManagerImpl();

    // NOLINTEND
};

}; // namespace Bedrock
