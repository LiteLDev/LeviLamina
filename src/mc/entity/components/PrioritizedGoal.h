#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrioritizedGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIORITIZEDGOAL
public:
    PrioritizedGoal& operator=(PrioritizedGoal const&) = delete;
    PrioritizedGoal(PrioritizedGoal const&)            = delete;
    PrioritizedGoal()                                  = delete;
#endif

public:
    /**
     * @symbol ?getPriority\@PrioritizedGoal\@\@QEBAHXZ
     */
    MCAPI int getPriority() const;
    /**
     * @symbol ?getToStart\@PrioritizedGoal\@\@QEBA_NXZ
     */
    MCAPI bool getToStart() const;
    /**
     * @symbol ?getUsed\@PrioritizedGoal\@\@QEBA_NXZ
     */
    MCAPI bool getUsed() const;
    /**
     * @symbol ?setToStart\@PrioritizedGoal\@\@QEAAX_N\@Z
     */
    MCAPI void setToStart(bool);
    /**
     * @symbol ?setUsed\@PrioritizedGoal\@\@QEAAX_N\@Z
     */
    MCAPI void setUsed(bool);
    /**
     * @symbol ??1PrioritizedGoal\@\@QEAA\@XZ
     */
    MCAPI ~PrioritizedGoal();
};
