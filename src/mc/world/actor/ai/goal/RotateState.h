#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class RotateState : public ::PetSleepWithOwnerState {
public:
    // prevent constructor by default
    RotateState& operator=(RotateState const&);
    RotateState(RotateState const&);
    RotateState();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RotateState@@UEAA@XZ
    virtual ~RotateState() = default;

    // vIndex: 1, symbol: ?tick@RotateState@@UEAAXXZ
    virtual void tick();

    // vIndex: 2, symbol: ?start@PetSleepWithOwnerState@@UEAAXXZ
    virtual void start();

    // vIndex: 3, symbol: ?stop@PetSleepWithOwnerState@@UEAAXXZ
    virtual void stop();

    // NOLINTEND
};
