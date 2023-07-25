#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SchedulerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULERSYSTEM
public:
    SchedulerSystem& operator=(SchedulerSystem const&) = delete;
    SchedulerSystem(SchedulerSystem const&)            = delete;
    SchedulerSystem()                                  = delete;
#endif

public:
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
     * @symbol ?tick\@SchedulerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
