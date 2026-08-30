#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PetSleepWithOwnerGoal;
// clang-format on

class PetSleepWithOwnerState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PetSleepWithOwnerGoal&> mGoal;
    // NOLINTEND

public:
    // prevent constructor by default
    PetSleepWithOwnerState& operator=(PetSleepWithOwnerState const&);
    PetSleepWithOwnerState(PetSleepWithOwnerState const&);
    PetSleepWithOwnerState();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PetSleepWithOwnerState() = default;

    virtual void tick();

    virtual void start();

    virtual void stop();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void dampenSpeed();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $start();

    MCAPI void $stop();


    // NOLINTEND
};
