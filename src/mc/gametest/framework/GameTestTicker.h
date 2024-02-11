#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameTestClearTask;
namespace gametest { class BaseGameTestBatchRunner; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestRuleHelper; }
// clang-format on

namespace gametest {

class GameTestTicker {
public:
    // prevent constructor by default
    GameTestTicker& operator=(GameTestTicker const&);
    GameTestTicker(GameTestTicker const&);
    GameTestTicker();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0GameTestTicker@gametest@@QEAA@V?$unique_ptr@VIGameTestRuleHelper@gametest@@U?$default_delete@VIGameTestRuleHelper@gametest@@@std@@@std@@@Z
    MCAPI explicit GameTestTicker(std::unique_ptr<class gametest::IGameTestRuleHelper>);

    // symbol: ?add@GameTestTicker@gametest@@QEAAXV?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@@Z
    MCAPI void add(std::shared_ptr<class gametest::BaseGameTestInstance> test);

    // symbol:
    // ?add@GameTestTicker@gametest@@QEAAXV?$unique_ptr@VGameTestClearTask@@U?$default_delete@VGameTestClearTask@@@std@@@std@@@Z
    MCAPI void add(std::unique_ptr<class GameTestClearTask>);

    // symbol:
    // ?add@GameTestTicker@gametest@@QEAAXV?$unique_ptr@VBaseGameTestBatchRunner@gametest@@U?$default_delete@VBaseGameTestBatchRunner@gametest@@@std@@@std@@@Z
    MCAPI void add(std::unique_ptr<class gametest::BaseGameTestBatchRunner>);

    // symbol: ?cleanupGameRules@GameTestTicker@gametest@@QEAAXXZ
    MCAPI void cleanupGameRules();

    // symbol: ?clear@GameTestTicker@gametest@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?empty@GameTestTicker@gametest@@QEBA_NXZ
    MCAPI bool empty() const;

    // symbol: ?forceStop@GameTestTicker@gametest@@QEAAXXZ
    MCAPI void forceStop();

    // symbol: ?tick@GameTestTicker@gametest@@QEAAXXZ
    MCAPI void tick();

    // symbol: ??1GameTestTicker@gametest@@QEAA@XZ
    MCAPI ~GameTestTicker();

    // NOLINTEND
};

}; // namespace gametest
