#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SchedulerSystem {

public:
    // prevent constructor by default
    SchedulerSystem& operator=(SchedulerSystem const&) = delete;
    SchedulerSystem(SchedulerSystem const&)            = delete;
    SchedulerSystem()                                  = delete;

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
     * @symbol ?tick\@SchedulerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
