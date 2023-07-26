#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class WalkState : public ::PetSleepWithOwnerState {

public:
    // prevent constructor by default
    WalkState& operator=(WalkState const&) = delete;
    WalkState(WalkState const&)            = delete;
    WalkState()                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@WalkState\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?start\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?stop\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
};
