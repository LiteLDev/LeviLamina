#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestReport {

public:
    // prevent constructor by default
    GameTestReport& operator=(GameTestReport const&) = delete;
    GameTestReport(GameTestReport const&)            = delete;
    GameTestReport()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?bindType\@GameTestReport\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ??1GameTestReport\@\@QEAA\@XZ
     */
    MCAPI ~GameTestReport();
    // NOLINTEND
};
