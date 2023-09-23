#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class GameTestBatch {
public:
    // prevent constructor by default
    GameTestBatch& operator=(GameTestBatch const&);
    GameTestBatch();

public:
    // NOLINTBEGIN
    // symbol: ??0GameTestBatch@gametest@@QEAA@$$QEAV01@@Z
    MCAPI GameTestBatch(class gametest::GameTestBatch&&);

    // symbol: ??0GameTestBatch@gametest@@QEAA@AEBV01@@Z
    MCAPI
    GameTestBatch(class gametest::GameTestBatch const&);

    // symbol: ??1GameTestBatch@gametest@@QEAA@XZ
    MCAPI ~GameTestBatch();

    // NOLINTEND
};

}; // namespace gametest
