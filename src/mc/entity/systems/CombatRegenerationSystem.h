#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CombatRegenerationSystem {

public:
    // prevent constructor by default
    CombatRegenerationSystem& operator=(CombatRegenerationSystem const&) = delete;
    CombatRegenerationSystem(CombatRegenerationSystem const&)            = delete;
    CombatRegenerationSystem()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@CombatRegenerationSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
