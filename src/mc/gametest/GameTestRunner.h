#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestBatchRunner; }
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestBatch; }
namespace gametest { class GameTestRegistry; }
namespace gametest { class GameTestTicker; }
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { struct TestParameters; }
// clang-format on

class GameTestRunner {

public:
    // prevent constructor by default
    GameTestRunner& operator=(GameTestRunner const&) = delete;
    GameTestRunner(GameTestRunner const&)            = delete;
    GameTestRunner()                                 = delete;

public:
    /**
     * @symbol ?clearMarkers\@GameTestRunner\@\@SAXAEAVLevel\@\@\@Z
     */
    MCAPI static void clearMarkers(class Level&); // NOLINT
    /**
     * @symbol
     * ?groupTestsIntoBatches\@GameTestRunner\@\@SA?AV?$vector\@VGameTestBatch\@gametest\@\@V?$allocator\@VGameTestBatch\@gametest\@\@\@std\@\@\@std\@\@AEAVGameTestRegistry\@gametest\@\@AEBV?$vector\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@\@2\@\@3\@H\@Z
     */
    MCAPI static std::vector<class gametest::GameTestBatch> groupTestsIntoBatches(
        class gametest::GameTestRegistry&,
        std::vector<class std::shared_ptr<class gametest::BaseGameTestFunction>> const&,
        int
    ); // NOLINT
    /**
     * @symbol
     * ?runTest\@GameTestRunner\@\@SAXV?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@AEAVGameTestTicker\@gametest\@\@\@Z
     */
    MCAPI static void
    runTest(class std::shared_ptr<class gametest::BaseGameTestInstance>, class gametest::GameTestTicker&); // NOLINT
    /**
     * @symbol
     * ?runTests\@GameTestRunner\@\@SA?AV?$unique_ptr\@VBaseGameTestBatchRunner\@gametest\@\@U?$default_delete\@VBaseGameTestBatchRunner\@gametest\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEAVGameTestRegistry\@gametest\@\@V?$unique_ptr\@VIGameTestHelperProvider\@gametest\@\@U?$default_delete\@VIGameTestHelperProvider\@gametest\@\@\@std\@\@\@3\@AEAVGameTestTicker\@6\@$$QEAUTestParameters\@6\@\@Z
     */
    MCAPI static std::unique_ptr<class gametest::BaseGameTestBatchRunner>
    runTests(class Dimension&, class gametest::GameTestRegistry&, std::unique_ptr<class gametest::IGameTestHelperProvider>, class gametest::GameTestTicker&, struct gametest::TestParameters&&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_subdivideBatch\@GameTestRunner\@\@CA?AV?$vector\@V?$vector\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@\@2\@\@std\@\@V?$allocator\@V?$vector\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@AEAV?$vector\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@\@2\@\@3\@H\@Z
     */
    MCAPI static std::vector<class std::vector<
        class std::shared_ptr<class gametest::BaseGameTestFunction>,
        class std::allocator<class std::shared_ptr<class gametest::BaseGameTestFunction>>>>
    _subdivideBatch(std::vector<class std::shared_ptr<class gametest::BaseGameTestFunction>>&, int); // NOLINT

private:
};
