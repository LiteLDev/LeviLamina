#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Dimension;
class Level;
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
    // static functions
    // NOLINTBEGIN
    MCAPI static void clearAllTests(
        ::BlockSource&                      region,
        ::gametest::GameTestTicker&         testTicker,
        ::std::vector<::BoundingBox> const& gameTestInstanceBounds
    );

    MCAPI static void clearMarkers(::Level& level);

    MCAPI static ::std::vector<::gametest::GameTestBatch> groupTestsIntoBatches(
        ::gametest::GameTestRegistry&                                             registry,
        ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>> const& testFunctions,
        int                                                                       maxTestsPerBatch
    );

    MCAPI static void
    runTest(::std::shared_ptr<::gametest::BaseGameTestInstance> test, ::gametest::GameTestTicker& ticker);

    MCAPI static ::std::unique_ptr<::gametest::BaseGameTestBatchRunner> runTestBatches(
        ::Dimension&                                           dimension,
        ::std::unique_ptr<::gametest::IGameTestHelperProvider> helperProvider,
        ::gametest::GameTestTicker&                            testTicker,
        ::std::vector<::gametest::GameTestBatch>               batches,
        ::gametest::TestParameters&&                           params
    );
    // NOLINTEND
};
