#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoostableSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTABLESYSTEM
public:
    BoostableSystem& operator=(BoostableSystem const&) = delete;
    BoostableSystem(BoostableSystem const&)            = delete;
    BoostableSystem()                                  = delete;
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
     * @symbol ?tick\@BoostableSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
