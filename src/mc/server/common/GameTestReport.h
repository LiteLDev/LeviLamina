#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestReport {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTREPORT
public:
    GameTestReport& operator=(GameTestReport const&) = delete;
    GameTestReport(GameTestReport const&)            = delete;
    GameTestReport()                                 = delete;
#endif

public:
    /**
     * @symbol ??1GameTestReport\@\@QEAA\@XZ
     */
    MCAPI ~GameTestReport();
    /**
     * @symbol ?bindType\@GameTestReport\@\@SAXXZ
     */
    MCAPI static void bindType();
};
