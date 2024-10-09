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
    MCAPI ~GameTestReport();

    MCAPI static void bindType();

    // NOLINTEND
};
