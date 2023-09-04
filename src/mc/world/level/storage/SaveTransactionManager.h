#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class SaveTransactionManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    SaveTransactionManager& operator=(SaveTransactionManager const&) = delete;
    SaveTransactionManager(SaveTransactionManager const&)            = delete;
    SaveTransactionManager()                                         = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0SaveTransactionManager@@QEAA@AEAVWorkerPool@@AEAVScheduler@@V?$function@$$A6AX_N@Z@std@@@Z
    MCAPI SaveTransactionManager(class WorkerPool&, class Scheduler&, std::function<void(bool)>);

    // symbol: ?onBeginCompaction@SaveTransactionManager@@QEAAXXZ
    MCAPI void onBeginCompaction();

    // symbol: ?onEndCompaction@SaveTransactionManager@@QEAAXXZ
    MCAPI void onEndCompaction();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_hideGlobalSaveIcon@SaveTransactionManager@@AEAAXXZ
    MCAPI void _hideGlobalSaveIcon();

    // symbol: ?_showGlobalSaveIcon@SaveTransactionManager@@AEAAXXZ
    MCAPI void _showGlobalSaveIcon();

    // NOLINTEND
};
