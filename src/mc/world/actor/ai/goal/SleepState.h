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
    // vIndex: 0, symbol: __gen_??1SleepState@@UEAA@XZ
    virtual ~SleepState() = default;

    // vIndex: 1, symbol: ?tick@SleepState@@UEAAXXZ
    virtual void tick();

    // vIndex: 2, symbol: ?start@PetSleepWithOwnerState@@UEAAXXZ
    virtual void start();

    // vIndex: 3, symbol: ?stop@SleepState@@UEAAXXZ
    virtual void stop();

    // NOLINTEND
};
