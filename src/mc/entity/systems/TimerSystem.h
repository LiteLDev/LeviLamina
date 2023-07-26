#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimerSystem {

public:
    // prevent constructor by default
    TimerSystem& operator=(TimerSystem const&) = delete;
    TimerSystem(TimerSystem const&)            = delete;
    TimerSystem()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@TimerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
