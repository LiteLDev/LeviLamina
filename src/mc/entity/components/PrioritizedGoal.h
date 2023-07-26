#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrioritizedGoal {

public:
    // prevent constructor by default
    PrioritizedGoal& operator=(PrioritizedGoal const&) = delete;
    PrioritizedGoal(PrioritizedGoal const&)            = delete;
    PrioritizedGoal()                                  = delete;

public:
    /**
     * @symbol ?getPriority\@PrioritizedGoal\@\@QEBAHXZ
     */
    MCAPI int getPriority() const; // NOLINT
    /**
     * @symbol ?getToStart\@PrioritizedGoal\@\@QEBA_NXZ
     */
    MCAPI bool getToStart() const; // NOLINT
    /**
     * @symbol ?getUsed\@PrioritizedGoal\@\@QEBA_NXZ
     */
    MCAPI bool getUsed() const; // NOLINT
    /**
     * @symbol ?setToStart\@PrioritizedGoal\@\@QEAAX_N\@Z
     */
    MCAPI void setToStart(bool); // NOLINT
    /**
     * @symbol ?setUsed\@PrioritizedGoal\@\@QEAAX_N\@Z
     */
    MCAPI void setUsed(bool); // NOLINT
    /**
     * @symbol ??1PrioritizedGoal\@\@QEAA\@XZ
     */
    MCAPI ~PrioritizedGoal(); // NOLINT
};
