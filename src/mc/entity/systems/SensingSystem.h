#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SensingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENSINGSYSTEM
public:
    SensingSystem& operator=(SensingSystem const&) = delete;
    SensingSystem(SensingSystem const&)            = delete;
    SensingSystem()                                = delete;
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
     * @symbol ?tick\@SensingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
