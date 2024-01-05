#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrioritizedGoal {
public:
    // prevent constructor by default
    PrioritizedGoal& operator=(PrioritizedGoal const&);
    PrioritizedGoal(PrioritizedGoal const&);
    PrioritizedGoal();

public:
    // NOLINTBEGIN
    // symbol: ?getPriority@PrioritizedGoal@@QEBAHXZ
    MCAPI int getPriority() const;

    // symbol: ?getToStart@PrioritizedGoal@@QEBA_NXZ
    MCAPI bool getToStart() const;

    // symbol: ?getUsed@PrioritizedGoal@@QEBA_NXZ
    MCAPI bool getUsed() const;

    // symbol: ?setToStart@PrioritizedGoal@@QEAAX_N@Z
    MCAPI void setToStart(bool start);

    // symbol: ?setUsed@PrioritizedGoal@@QEAAX_N@Z
    MCAPI void setUsed(bool used);

    // symbol: ??1PrioritizedGoal@@QEAA@XZ
    MCAPI ~PrioritizedGoal();

    // NOLINTEND
};
