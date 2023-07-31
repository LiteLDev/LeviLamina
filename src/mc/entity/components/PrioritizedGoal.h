#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrioritizedGoal {

public:
    // prevent constructor by default
    PrioritizedGoal& operator=(PrioritizedGoal const&) = delete;
    PrioritizedGoal(PrioritizedGoal const&)            = delete;
    PrioritizedGoal()                                  = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
