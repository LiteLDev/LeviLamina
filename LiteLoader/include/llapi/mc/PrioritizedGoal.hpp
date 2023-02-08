/**
 * @file  PrioritizedGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1463279492
     * @symbol  ?getPriority\@PrioritizedGoal\@\@QEBAHXZ
     */
    MCAPI int getPriority() const;
    /**
     * @hash   1855216544
     * @symbol  ?getToStart\@PrioritizedGoal\@\@QEBA_NXZ
     */
    MCAPI bool getToStart() const;
    /**
     * @hash   725615310
     * @symbol  ?getUsed\@PrioritizedGoal\@\@QEBA_NXZ
     */
    MCAPI bool getUsed() const;
    /**
     * @hash   1445867836
     * @symbol  ?setToStart\@PrioritizedGoal\@\@QEAAX_N\@Z
     */
    MCAPI void setToStart(bool);
    /**
     * @hash   -1757097746
     * @symbol  ?setUsed\@PrioritizedGoal\@\@QEAAX_N\@Z
     */
    MCAPI void setUsed(bool);
    /**
     * @hash   -2126230012
     * @symbol  ??1PrioritizedGoal\@\@QEAA\@XZ
     */
    MCAPI ~PrioritizedGoal();

};