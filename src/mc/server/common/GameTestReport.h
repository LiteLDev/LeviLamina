#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestReport {
public:
    // prevent constructor by default
    GameTestReport& operator=(GameTestReport const&);
    GameTestReport(GameTestReport const&);
    GameTestReport();

public:
    // NOLINTBEGIN
    // symbol: ??1GameTestReport@@QEAA@XZ
    MCAPI ~GameTestReport();

    // symbol: ?bindType@GameTestReport@@SAXXZ
    MCAPI static void bindType();

    // NOLINTEND
};
