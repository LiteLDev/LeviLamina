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
    // vIndex: 0, symbol: __gen_??1WalkState@@UEAA@XZ
    virtual ~WalkState() = default;

    // vIndex: 1, symbol: ?tick@WalkState@@UEAAXXZ
    virtual void tick();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?stop@PetSleepWithOwnerState@@UEAAXXZ
    virtual void stop();

    // NOLINTEND
};
