#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestTicker; }
// clang-format on

class GameTestRunner {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void clearMarkers(::Level& level);

    MCNAPI static void
    runTest(::std::shared_ptr<::gametest::BaseGameTestInstance> test, ::gametest::GameTestTicker& ticker);
    // NOLINTEND
};
