#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/data/SmallSet.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
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
    // symbol: ??1WorkerPool@@UEAA@XZ
    MCVAPI ~WorkerPool();

    // symbol: ??0WorkerPool@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVScheduler@@@Z
    MCAPI WorkerPool(std::string, class Scheduler&);

    // symbol:
    // ??0WorkerPool@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KAEBVOSThreadPriority@Threading@Bedrock@@V?$optional@_K@2@_NV?$optional@H@2@@Z
    MCAPI
    WorkerPool(std::string, uint64, class Bedrock::Threading::OSThreadPriority const&, std::optional<uint64>, bool, std::optional<int>);

    // symbol: ?queue@WorkerPool@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@_N@Z
    MCAPI void queue(std::shared_ptr<class BackgroundTaskBase>, bool);

    // symbol: ?size@WorkerPool@@QEBA_KXZ
    MCAPI uint64 size() const;

    // symbol: ?tryPop@WorkerPool@@QEAA?AV?$shared_ptr@VBackgroundTaskBase@@@std@@H@Z
    MCAPI std::shared_ptr<class BackgroundTaskBase> tryPop(int);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_registerPool@WorkerPool@@KAXAEAV1@@Z
    MCAPI static void _registerPool(class WorkerPool&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkPendingWork@WorkerPool@@AEAA_NXZ
    MCAPI bool _checkPendingWork();

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?sAllPools@WorkerPool@@1V?$SmallSet@PEAVWorkerPool@@@@A
    MCAPI static class SmallSet<class WorkerPool*> sAllPools;

    // symbol: ?sAllPoolsMutex@WorkerPool@@1Vmutex@std@@A
    MCAPI static std::mutex sAllPoolsMutex;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    // NOLINTEND
};
