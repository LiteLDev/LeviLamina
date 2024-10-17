#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class SleepState : public ::PetSleepWithOwnerState {
public:
    // prevent constructor by default
    SleepState& operator=(SleepState const&);
    SleepState(SleepState const&);
    SleepState();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SleepState() = default;

    // vIndex: 1
    virtual void tick();

    // vIndex: 2
    virtual void start();

    // vIndex: 3
    virtual void stop();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
