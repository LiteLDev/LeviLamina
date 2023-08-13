#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class SleepState : public ::PetSleepWithOwnerState {

public:
    // prevent constructor by default
    SleepState& operator=(SleepState const&) = delete;
    SleepState(SleepState const&)            = delete;
    SleepState()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?stop\@SleepState\@\@UEAAXXZ
     */
    virtual void stop();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLEEPSTATE
    /**
     * @symbol ?tick\@SleepState\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif
    // NOLINTEND
};
