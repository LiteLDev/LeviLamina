#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class Scheduler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    Scheduler& operator=(Scheduler const&);
    Scheduler(Scheduler const&);
    Scheduler();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~Scheduler() = default;

    // symbol: ??0Scheduler@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z
    MCAPI Scheduler(std::string, uint);

    // symbol: ?changeThread@Scheduler@@QEAAXVid@thread@std@@@Z
    MCAPI void changeThread(std::thread::id);

    // symbol: ?getCoroutinePool@Scheduler@@QEAAAEAVWorkerPool@@XZ
    MCAPI class WorkerPool& getCoroutinePool();

    // symbol: ?processCoroutines@Scheduler@@QEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@0@Z
    MCAPI void processCoroutines(std::chrono::nanoseconds, std::chrono::nanoseconds);

    // symbol: ?setTargetFPS@Scheduler@@QEAAXI@Z
    MCAPI void setTargetFPS(uint);

    // symbol: ?AVERAGE_TASK_TOLERANCE@Scheduler@@2MB
    MCAPI static float const AVERAGE_TASK_TOLERANCE;

    // NOLINTEND
};
