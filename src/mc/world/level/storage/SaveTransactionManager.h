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
    SaveTransactionManager& operator=(SaveTransactionManager const&);
    SaveTransactionManager(SaveTransactionManager const&);
    SaveTransactionManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SaveTransactionManager@@UEAA@XZ
    virtual ~SaveTransactionManager() = default;

    // symbol: ??0SaveTransactionManager@@QEAA@AEAVWorkerPool@@AEAVScheduler@@V?$function@$$A6AX_N@Z@std@@@Z
    MCAPI SaveTransactionManager(
        class WorkerPool&         workerPool,
        class Scheduler&          scheduler,
        std::function<void(bool)> showIconFunction
    );

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
