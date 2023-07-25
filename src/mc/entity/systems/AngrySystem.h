#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AngrySystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGRYSYSTEM
public:
    AngrySystem& operator=(AngrySystem const&) = delete;
    AngrySystem(AngrySystem const&)            = delete;
    AngrySystem()                              = delete;
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
     * @symbol ?tick\@AngrySystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol ?_tickComponent\@AngrySystem\@\@CAXAEAVEntityContext\@\@AEAVAngryComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class EntityContext&, class AngryComponent&);

private:
};
