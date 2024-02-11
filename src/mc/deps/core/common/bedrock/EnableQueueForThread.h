#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

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
    // vIndex: 0, symbol: ??1EnableQueueForThread@Threading@Bedrock@@UEAA@XZ
    virtual ~EnableQueueForThread();

    // symbol:
    // ??0EnableQueueForThread@Threading@Bedrock@@QEAA@AEAVWorkerPool@@AEAVScheduler@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI EnableQueueForThread(class WorkerPool&, class Scheduler&, std::string);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?flushThreadTasks@EnableQueueForThread@Threading@Bedrock@@IEAAXXZ
    MCAPI void flushThreadTasks();

    // symbol:
    // ?queue@EnableQueueForThread@Threading@Bedrock@@IEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@$$QEAV?$function@$$A6AXXZ@5@@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(std::function<void()>&&);

    // NOLINTEND
};

}; // namespace Bedrock::Threading
