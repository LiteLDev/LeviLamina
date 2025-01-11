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
    MCFOLD int getPriority() const;

    MCFOLD bool getToStart() const;

    MCFOLD bool getUsed() const;

    MCFOLD void setToStart(bool start);

    MCFOLD void setUsed(bool used);

    MCAPI ~PrioritizedGoal();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
