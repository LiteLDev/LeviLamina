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
    // vIndex: 0
    virtual ~PetSleepWithOwnerState() = default;

    // vIndex: 1
    virtual void tick();

    // vIndex: 2
    virtual void start();

    // vIndex: 3
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
