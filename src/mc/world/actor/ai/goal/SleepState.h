#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SleepState {

public:
    // prevent constructor by default
    SleepState& operator=(SleepState const&) = delete;
    SleepState(SleepState const&)            = delete;
    SleepState()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@SleepState\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?stop\@SleepState\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
};
