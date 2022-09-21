/**
 * @file  MC/GameTestClearTask.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameTestClearTask.
 *
 */
class GameTestClearTask {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTCLEARTASK
public:
    class GameTestClearTask& operator=(class GameTestClearTask const &) = delete;
    GameTestClearTask(class GameTestClearTask const &) = delete;
    GameTestClearTask() = delete;
#endif

public:
    /**
     * @hash   -1921943684
     * @symbol ??0GameTestClearTask@@QEAA@AEAVDimension@@AEBVBoundingBox@@@Z
     */
    MCAPI GameTestClearTask(class Dimension &, class BoundingBox const &);
    /**
     * @hash   2110927220
     * @symbol ?isDone@GameTestClearTask@@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @hash   -1413669203
     * @symbol ?tick@GameTestClearTask@@QEAAXXZ
     */
    MCAPI void tick();

};