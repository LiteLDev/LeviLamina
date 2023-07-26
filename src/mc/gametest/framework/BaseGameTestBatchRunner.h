#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TestSummaryDisplayer;
enum class Rotation;
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
    BaseGameTestBatchRunner& operator=(BaseGameTestBatchRunner const&) = delete;
    BaseGameTestBatchRunner(BaseGameTestBatchRunner const&)            = delete;
    BaseGameTestBatchRunner()                                          = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETEST_BASEGAMETESTBATCHRUNNER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseGameTestBatchRunner(); // NOLINT
#endif
    /**
     * @symbol
     * ??0BaseGameTestBatchRunner\@gametest\@\@QEAA\@$$QEAV?$vector\@VGameTestBatch\@gametest\@\@V?$allocator\@VGameTestBatch\@gametest\@\@\@std\@\@\@std\@\@AEAVGameTestTicker\@1\@$$QEAUTestParameters\@1\@\@Z
     */
    MCAPI
    BaseGameTestBatchRunner(std::vector<class gametest::GameTestBatch>&&, class gametest::GameTestTicker&, struct gametest::TestParameters&&); // NOLINT
    /**
     * @symbol
     * ?getTestInstances\@BaseGameTestBatchRunner\@gametest\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class gametest::BaseGameTestInstance>> const&
          getTestInstances() const; // NOLINT
    /**
     * @symbol
     * ?setBatchTestTracker\@BaseGameTestBatchRunner\@gametest\@\@QEAAXV?$unique_ptr\@VMultipleTestTracker\@gametest\@\@U?$default_delete\@VMultipleTestTracker\@gametest\@\@\@std\@\@\@std\@\@V?$weak_ptr\@VTestSummaryDisplayer\@\@\@4\@\@Z
     */
    MCAPI void
        setBatchTestTracker(std::unique_ptr<class gametest::MultipleTestTracker>, class std::weak_ptr<class TestSummaryDisplayer>); // NOLINT
    /**
     * @symbol ?start\@BaseGameTestBatchRunner\@gametest\@\@QEAAXXZ
     */
    MCAPI void start(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_addTestInstanceWithRotation\@BaseGameTestBatchRunner\@gametest\@\@AEAAXAEAV?$vector\@V?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@\@2\@\@std\@\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@4\@W4Rotation\@\@\@Z
     */
    MCAPI void _addTestInstanceWithRotation(
        std::vector<class std::shared_ptr<class gametest::BaseGameTestInstance>>&,
        class std::shared_ptr<class gametest::BaseGameTestFunction>,
        enum class Rotation
    ); // NOLINT
    /**
     * @symbol ?_resetBatchTracker\@BaseGameTestBatchRunner\@gametest\@\@AEAAXXZ
     */
    MCAPI void _resetBatchTracker(); // NOLINT
    /**
     * @symbol ?_runBatch\@BaseGameTestBatchRunner\@gametest\@\@AEAAXH\@Z
     */
    MCAPI void _runBatch(int); // NOLINT

private:
};

}; // namespace gametest
