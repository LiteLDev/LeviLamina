#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class IdleState : public ::PetSleepWithOwnerState {
public:
    // prevent constructor by default
    IdleState& operator=(IdleState const&);
    IdleState(IdleState const&);
    IdleState();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IdleState@@UEAA@XZ
    virtual ~IdleState() = default;

    // vIndex: 1, symbol: ?tick@IdleState@@UEAAXXZ
    virtual void tick();

    // vIndex: 2, symbol: ?start@IdleState@@UEAAXXZ
    virtual void start();

    // vIndex: 3, symbol: ?stop@PetSleepWithOwnerState@@UEAAXXZ
    virtual void stop();

    // NOLINTEND
};
