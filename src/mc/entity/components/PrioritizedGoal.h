#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrioritizedGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk385708;
    ::ll::UntypedStorage<4, 4> mUnkcc3033;
    ::ll::UntypedStorage<1, 1> mUnk77d703;
    ::ll::UntypedStorage<1, 1> mUnkdc298f;
    // NOLINTEND

public:
    // prevent constructor by default
    PrioritizedGoal& operator=(PrioritizedGoal const&);
    PrioritizedGoal(PrioritizedGoal const&);
    PrioritizedGoal();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getPriority() const;

    MCAPI bool getToStart() const;

    MCAPI bool getUsed() const;

    MCAPI void setToStart(bool start);

    MCAPI void setUsed(bool used);

    MCAPI ~PrioritizedGoal();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
