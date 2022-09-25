/**
 * @file  GameTestResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure GameTestResult.
 *
 */
struct GameTestResult {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTRESULT
public:
    GameTestResult() = delete;
#endif

public:
    /**
     * @hash   1482987199
     * @symbol ??0GameTestResult@@QEAA@AEBU0@@Z
     */
    MCAPI GameTestResult(struct GameTestResult const &);
    /**
     * @hash   1173739206
     * @symbol ??4GameTestResult@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct GameTestResult & operator=(struct GameTestResult const &);
    /**
     * @hash   302243014
     * @symbol ??4GameTestResult@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct GameTestResult & operator=(struct GameTestResult &&);
    /**
     * @hash   -1699303820
     * @symbol ??8GameTestResult@@QEBA_NAEBU0@@Z
     */
    MCAPI bool operator==(struct GameTestResult const &) const;
    /**
     * @hash   1203706235
     * @symbol ??1GameTestResult@@QEAA@XZ
     */
    MCAPI ~GameTestResult();
    /**
     * @hash   -542180813
     * @symbol ?bindType@GameTestResult@@SAXXZ
     */
    MCAPI static void bindType();

};