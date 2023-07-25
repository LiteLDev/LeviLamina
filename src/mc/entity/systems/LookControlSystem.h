#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookControlSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKCONTROLSYSTEM
public:
    LookControlSystem& operator=(LookControlSystem const&) = delete;
    LookControlSystem(LookControlSystem const&)            = delete;
    LookControlSystem()                                    = delete;
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
     * @symbol ?tick\@LookControlSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
