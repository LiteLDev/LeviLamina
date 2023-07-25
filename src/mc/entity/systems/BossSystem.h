#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BossSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSSYSTEM
public:
    BossSystem& operator=(BossSystem const&) = delete;
    BossSystem(BossSystem const&)            = delete;
    BossSystem()                             = delete;
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
     * @symbol ?tick\@BossSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
