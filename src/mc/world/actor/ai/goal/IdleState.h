#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class IdleState : public ::PetSleepWithOwnerState {
public:
    // prevent constructor by default
    IdleState& operator=(IdleState const&) = delete;
    IdleState(IdleState const&)            = delete;
    IdleState()                            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?tick@IdleState@@UEAAXXZ
    virtual void tick();

    // vIndex: 2, symbol: ?start@IdleState@@UEAAXXZ
    virtual void start();

    // vIndex: 3, symbol: ?stop@PetSleepWithOwnerState@@UEAAXXZ
    virtual void stop();

    // NOLINTEND
};
