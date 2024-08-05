#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class WalkState : public ::PetSleepWithOwnerState {
public:
    // prevent constructor by default
    WalkState& operator=(WalkState const&);
    WalkState(WalkState const&);
    WalkState();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WalkState() = default;

    // vIndex: 1
    virtual void tick();

    // vIndex: 2
    virtual void start();

    // vIndex: 3
    virtual void stop();

    // NOLINTEND
};
