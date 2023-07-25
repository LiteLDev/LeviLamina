#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BalloonSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BALLOONSYSTEM
public:
    BalloonSystem& operator=(BalloonSystem const&) = delete;
    BalloonSystem(BalloonSystem const&)            = delete;
    BalloonSystem()                                = delete;
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
     * @symbol ?tick\@BalloonSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
