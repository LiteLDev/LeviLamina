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
     * @symbol  ?getPriority\@PrioritizedGoal\@\@QEBAHXZ
     */
    MCAPI int getPriority() const;
    /**
     * @symbol  ?getToStart\@PrioritizedGoal\@\@QEBA_NXZ
     */
    MCAPI bool getToStart() const;
    /**
     * @symbol  ?getUsed\@PrioritizedGoal\@\@QEBA_NXZ
     */
    MCAPI bool getUsed() const;
    /**
     * @symbol  ?setToStart\@PrioritizedGoal\@\@QEAAX_N\@Z
     */
    MCAPI void setToStart(bool);
    /**
     * @symbol  ?setUsed\@PrioritizedGoal\@\@QEAAX_N\@Z
     */
    MCAPI void setUsed(bool);
    /**
     * @symbol  ??1PrioritizedGoal\@\@QEAA\@XZ
     */
    MCAPI ~PrioritizedGoal();

};