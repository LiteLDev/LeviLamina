#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BurnsInDaylightSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURNSINDAYLIGHTSYSTEM
public:
    BurnsInDaylightSystem& operator=(BurnsInDaylightSystem const&) = delete;
    BurnsInDaylightSystem(BurnsInDaylightSystem const&)            = delete;
    BurnsInDaylightSystem()                                        = delete;
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
     * @symbol ?tick\@BurnsInDaylightSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
