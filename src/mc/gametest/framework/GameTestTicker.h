#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameTestClearTask;
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
    // ?add@GameTestTicker@gametest@@QEAAXV?$unique_ptr@VGameTestClearTask@@U?$default_delete@VGameTestClearTask@@@std@@@std@@@Z
    MCAPI void add(std::unique_ptr<class GameTestClearTask>);

    // symbol: ?clear@GameTestTicker@gametest@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?empty@GameTestTicker@gametest@@QEBA_NXZ
    MCAPI bool empty() const;

    // symbol: ?forceStop@GameTestTicker@gametest@@QEAAXXZ
    MCAPI void forceStop();

    // symbol: ?tick@GameTestTicker@gametest@@QEAAXXZ
    MCAPI void tick();

    // NOLINTEND
};

}; // namespace gametest
