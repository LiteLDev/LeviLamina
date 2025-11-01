#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Goal;
// clang-format on

class PrioritizedGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Goal>> mGoal;
    ::ll::TypedStorage<4, 4, int> mPriority;
    ::ll::TypedStorage<1, 1, bool> mUsed;
    ::ll::TypedStorage<1, 1, bool> mToStart;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PrioritizedGoal();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
