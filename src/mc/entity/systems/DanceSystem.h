#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DanceSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DANCESYSTEM
public:
    DanceSystem& operator=(DanceSystem const&) = delete;
    DanceSystem(DanceSystem const&)            = delete;
    DanceSystem()                              = delete;
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
     * @symbol ?tick\@DanceSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
