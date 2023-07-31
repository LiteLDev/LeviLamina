#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SleepState {

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
     * @symbol ?tick\@SleepState\@\@UEAAXXZ
     */
    virtual void tick();
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
    // NOLINTEND
};
