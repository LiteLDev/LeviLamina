#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestBatch; }
namespace gametest { class GameTestTicker; }
namespace gametest { struct TestParameters; }
// clang-format on

namespace gametest {

class BaseGameTestBatchRunner {
public:
    // prevent constructor by default
    BaseGameTestBatchRunner& operator=(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BaseGameTestBatchRunner@gametest@@UEAA@XZ
    virtual ~BaseGameTestBatchRunner();

    // vIndex: 1, symbol:
    // ?_createGameTestInstance@MinecraftGameTestBatchRunner@@MEAA?AV?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@AEAVBaseGameTestFunction@gametest@@@Z
    virtual std::shared_ptr<class gametest::BaseGameTestInstance>
    _createGameTestInstance(class gametest::BaseGameTestFunction&) = 0;

    // vIndex: 2, symbol:
    // ?_runTest@MinecraftGameTestBatchRunner@@MEAAXV?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@AEAVGameTestTicker@gametest@@@Z
    virtual void _runTest(std::shared_ptr<class gametest::BaseGameTestInstance>, class gametest::GameTestTicker&) = 0;

    // symbol:
    // ??0BaseGameTestBatchRunner@gametest@@QEAA@$$QEAV?$vector@VGameTestBatch@gametest@@V?$allocator@VGameTestBatch@gametest@@@std@@@std@@AEAVGameTestTicker@1@$$QEAUTestParameters@1@@Z
    MCAPI
    BaseGameTestBatchRunner(std::vector<class gametest::GameTestBatch>&&, class gametest::GameTestTicker&, struct gametest::TestParameters&&);

    // symbol: ?start@BaseGameTestBatchRunner@gametest@@QEAAXXZ
    MCAPI void start();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addTestInstanceWithRotation@BaseGameTestBatchRunner@gametest@@AEAAXAEAV?$vector@V?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@V?$allocator@V?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@@2@@std@@V?$shared_ptr@VBaseGameTestFunction@gametest@@@4@W4Rotation@@@Z
    MCAPI void _addTestInstanceWithRotation(
        std::vector<std::shared_ptr<class gametest::BaseGameTestInstance>>&,
        std::shared_ptr<class gametest::BaseGameTestFunction>,
        ::Rotation
    );

    // symbol: ?_resetBatchTracker@BaseGameTestBatchRunner@gametest@@AEAAXXZ
    MCAPI void _resetBatchTracker();

    // symbol: ?_runBatch@BaseGameTestBatchRunner@gametest@@AEAAXH@Z
    MCAPI void _runBatch(int);

    // NOLINTEND
};

}; // namespace gametest
