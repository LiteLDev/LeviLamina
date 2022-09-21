/**
 * @file  MC/GameTestReport.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -541183102
     * @symbol ??1GameTestReport@@QEAA@XZ
     */
    MCAPI ~GameTestReport();
    /**
     * @hash   369097347
     * @symbol ?bindType@GameTestReport@@SAXXZ
     */
    MCAPI static void bindType();

};