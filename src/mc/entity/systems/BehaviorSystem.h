#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORSYSTEM
public:
    BehaviorSystem& operator=(BehaviorSystem const&) = delete;
    BehaviorSystem(BehaviorSystem const&)            = delete;
    BehaviorSystem()                                 = delete;
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
     * @symbol ?tick\@BehaviorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
