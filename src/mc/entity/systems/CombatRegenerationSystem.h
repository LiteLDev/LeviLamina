#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CombatRegenerationSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMBATREGENERATIONSYSTEM
public:
    CombatRegenerationSystem& operator=(CombatRegenerationSystem const&) = delete;
    CombatRegenerationSystem(CombatRegenerationSystem const&)            = delete;
    CombatRegenerationSystem()                                           = delete;
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
     * @symbol ?tick\@CombatRegenerationSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
