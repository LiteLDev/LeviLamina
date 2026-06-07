#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

// auto generated forward declare list
// clang-format off
class PetSleepWithOwnerGoal;
// clang-format on

class SleepState : public ::PetSleepWithOwnerState {
public:
    // prevent constructor by default
    SleepState();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void stop() /*override*/;

    virtual void tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SleepState(::PetSleepWithOwnerGoal& goal);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PetSleepWithOwnerGoal& goal);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $stop();

    MCFOLD void $tick();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
