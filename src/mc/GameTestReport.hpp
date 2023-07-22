/**
 * @file  GameTestReport.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure GameTestReport.
 *
 */
struct GameTestReport {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTREPORT
public:
    struct GameTestReport& operator=(struct GameTestReport const &) = delete;
    GameTestReport(struct GameTestReport const &) = delete;
    GameTestReport() = delete;
#endif

public:
    /**
     * @symbol  ??1GameTestReport\@\@QEAA\@XZ
     */
    MCAPI ~GameTestReport();
    /**
     * @symbol  ?bindType\@GameTestReport\@\@SAXXZ
     */
    MCAPI static void bindType();

};