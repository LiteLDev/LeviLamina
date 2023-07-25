#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HopperSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERSYSTEM
public:
    HopperSystem& operator=(HopperSystem const&) = delete;
    HopperSystem(HopperSystem const&)            = delete;
    HopperSystem()                               = delete;
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
     * @symbol ?tick\@HopperSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
