#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestBatchRunner.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestBatchRunner; }
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestTicker; }
// clang-format on

class MinecraftGameTestBatchRunner : public ::gametest::BaseGameTestBatchRunner {
public:
    // prevent constructor by default
    MinecraftGameTestBatchRunner& operator=(MinecraftGameTestBatchRunner const&);
    MinecraftGameTestBatchRunner(MinecraftGameTestBatchRunner const&);
    MinecraftGameTestBatchRunner();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftGameTestBatchRunner() = default;

    // vIndex: 1
    virtual std::shared_ptr<class gametest::BaseGameTestInstance>
    _createGameTestInstance(class gametest::BaseGameTestFunction& function);

    // vIndex: 2
    virtual void
    _runTest(std::shared_ptr<class gametest::BaseGameTestInstance> test, class gametest::GameTestTicker& ticker);

    // NOLINTEND
};
