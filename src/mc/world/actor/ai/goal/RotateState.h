#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class RotateState : public ::PetSleepWithOwnerState {

public:
    // prevent constructor by default
    RotateState& operator=(RotateState const&) = delete;
    RotateState(RotateState const&)            = delete;
    RotateState()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@RotateState\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 2
     * @symbol ?start\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 3
     * @symbol ?stop\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    virtual void stop();
    // NOLINTEND
};
