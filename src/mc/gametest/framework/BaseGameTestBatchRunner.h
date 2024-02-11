#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

// auto generated forward declare list
// clang-format off
class TestSummaryDisplayer;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestBatch; }
namespace gametest { class GameTestTicker; }
namespace gametest { class MultipleTestTracker; }
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
    _createGameTestInstance(class gametest::BaseGameTestFunction& function) = 0;

    // vIndex: 2, symbol:
    // ?_runTest@MinecraftGameTestBatchRunner@@MEAAXV?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@AEAVGameTestTicker@gametest@@@Z
    virtual void
    _runTest(std::shared_ptr<class gametest::BaseGameTestInstance> test, class gametest::GameTestTicker&) = 0;

    // symbol:
    // ??0BaseGameTestBatchRunner@gametest@@QEAA@$$QEAV?$vector@VGameTestBatch@gametest@@V?$allocator@VGameTestBatch@gametest@@@std@@@std@@AEAVGameTestTicker@1@$$QEAUTestParameters@1@@Z
    MCAPI BaseGameTestBatchRunner(
        std::vector<class gametest::GameTestBatch>&&,
        class gametest::GameTestTicker&,
        struct gametest::TestParameters&& params
    );

    // symbol:
    // ?getTestInstances@BaseGameTestBatchRunner@gametest@@QEBAAEBV?$vector@V?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@V?$allocator@V?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::shared_ptr<class gametest::BaseGameTestInstance>> const& getTestInstances() const;

    // symbol:
    // ?setBatchTestTracker@BaseGameTestBatchRunner@gametest@@QEAAXV?$unique_ptr@VMultipleTestTracker@gametest@@U?$default_delete@VMultipleTestTracker@gametest@@@std@@@std@@V?$weak_ptr@VTestSummaryDisplayer@@@4@@Z
    MCAPI void
        setBatchTestTracker(std::unique_ptr<class gametest::MultipleTestTracker>, std::weak_ptr<class TestSummaryDisplayer>);

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
        ::Rotation rotation
    );

    // symbol: ?_resetBatchTracker@BaseGameTestBatchRunner@gametest@@AEAAXXZ
    MCAPI void _resetBatchTracker();

    // symbol: ?_runBatch@BaseGameTestBatchRunner@gametest@@AEAAXH@Z
    MCAPI void _runBatch(int);

    // NOLINTEND
};

}; // namespace gametest
