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
    MCAPI void add(std::unique_ptr<class GameTestClearTask> clearTask);

    MCAPI void clear();

    MCAPI bool empty() const;

    MCAPI void forceStop();

    MCAPI void tick();

    // NOLINTEND
};

}; // namespace gametest
