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
    GameTestRunner& operator=(GameTestRunner const&);
    GameTestRunner(GameTestRunner const&);
    GameTestRunner();

public:
    // NOLINTBEGIN
    MCAPI static void clearMarkers(class Level& level);

    MCAPI static std::vector<class gametest::GameTestBatch> groupTestsIntoBatches(
        class gametest::GameTestRegistry&                                         registry,
        std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>> const& testFunctions,
        int                                                                       maxTestsPerBatch
    );

    MCAPI static void
    runTest(std::shared_ptr<class gametest::BaseGameTestInstance> test, class gametest::GameTestTicker& ticker);

    MCAPI static std::unique_ptr<class gametest::BaseGameTestBatchRunner> runTests(
        class Dimension&                                         dimension,
        class gametest::GameTestRegistry&                        registry,
        std::unique_ptr<class gametest::IGameTestHelperProvider> helperProvider,
        class gametest::GameTestTicker&                          testTicker,
        struct gametest::TestParameters&&                        params
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>>>
    _subdivideBatch(std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>>& batch, int maxTestsPerBatch);

    // NOLINTEND
};
