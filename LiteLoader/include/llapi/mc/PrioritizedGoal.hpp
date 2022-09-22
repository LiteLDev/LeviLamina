/**
 * @file  PrioritizedGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PrioritizedGoal.
 *
 */
class PrioritizedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIORITIZEDGOAL
public:
    class PrioritizedGoal& operator=(class PrioritizedGoal const &) = delete;
    PrioritizedGoal(class PrioritizedGoal const &) = delete;
    PrioritizedGoal() = delete;
#endif

public:
    /**
     * @hash   -1590715780
     * @symbol ?getPriority@PrioritizedGoal@@QEBAHXZ
     */
    MCAPI int getPriority() const;
    /**
     * @hash   -1586674896
     * @symbol ?getToStart@PrioritizedGoal@@QEBA_NXZ
     */
    MCAPI bool getToStart() const;
    /**
     * @hash   1578691166
     * @symbol ?getUsed@PrioritizedGoal@@QEBA_NXZ
     */
    MCAPI bool getUsed() const;
    /**
     * @hash   -1996054356
     * @symbol ?setToStart@PrioritizedGoal@@QEAAX_N@Z
     */
    MCAPI void setToStart(bool);
    /**
     * @hash   -904052642
     * @symbol ?setUsed@PrioritizedGoal@@QEAAX_N@Z
     */
    MCAPI void setUsed(bool);
    /**
     * @hash   -1917316300
     * @symbol ??1PrioritizedGoal@@QEAA@XZ
     */
    MCAPI ~PrioritizedGoal();

};