#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    // static functions
    // NOLINTBEGIN
    MCNAPI static void clearMarkers(::Level& level);

    MCNAPI static ::std::vector<::gametest::GameTestBatch> groupTestsIntoBatches(
        ::gametest::GameTestRegistry&                                             registry,
        ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>> const& testFunctions,
        int                                                                       maxTestsPerBatch
    );

    MCNAPI static void
    runTest(::std::shared_ptr<::gametest::BaseGameTestInstance> test, ::gametest::GameTestTicker& ticker);

    MCNAPI static ::std::unique_ptr<::gametest::BaseGameTestBatchRunner> runTestBatches(
        ::Dimension&                                           dimension,
        ::std::unique_ptr<::gametest::IGameTestHelperProvider> helperProvider,
        ::gametest::GameTestTicker&                            testTicker,
        ::std::vector<::gametest::GameTestBatch>               batches,
        ::gametest::TestParameters&&                           params
    );
    // NOLINTEND
};
