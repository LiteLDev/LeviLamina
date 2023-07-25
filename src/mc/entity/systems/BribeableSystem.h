#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BribeableSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRIBEABLESYSTEM
public:
    BribeableSystem& operator=(BribeableSystem const&) = delete;
    BribeableSystem(BribeableSystem const&)            = delete;
    BribeableSystem()                                  = delete;
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
     * @symbol ?tick\@BribeableSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
