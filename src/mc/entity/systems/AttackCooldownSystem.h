#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttackCooldownSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKCOOLDOWNSYSTEM
public:
    AttackCooldownSystem& operator=(AttackCooldownSystem const&) = delete;
    AttackCooldownSystem(AttackCooldownSystem const&)            = delete;
    AttackCooldownSystem()                                       = delete;
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
     * @symbol ?tick\@AttackCooldownSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
