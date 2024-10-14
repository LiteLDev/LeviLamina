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
    MCAPI int getPriority() const;

    MCAPI bool getToStart() const;

    MCAPI bool getUsed() const;

    MCAPI void setToStart(bool start);

    MCAPI void setUsed(bool used);

    MCAPI ~PrioritizedGoal();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
