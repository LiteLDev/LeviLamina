#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DamageOverTimeSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGEOVERTIMESYSTEM
public:
    DamageOverTimeSystem& operator=(DamageOverTimeSystem const&) = delete;
    DamageOverTimeSystem(DamageOverTimeSystem const&)            = delete;
    DamageOverTimeSystem()                                       = delete;
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
     * @symbol ?tick\@DamageOverTimeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
