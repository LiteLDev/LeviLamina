#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class IdleState : public ::PetSleepWithOwnerState {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDLESTATE
public:
    IdleState& operator=(IdleState const&) = delete;
    IdleState(IdleState const&)            = delete;
    IdleState()                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@IdleState\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 2
     * @symbol ?start\@IdleState\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 3
     * @symbol ?stop\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    virtual void stop();
};
