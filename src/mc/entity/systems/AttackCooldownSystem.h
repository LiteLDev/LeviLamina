#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttackCooldownSystem {

public:
    // prevent constructor by default
    AttackCooldownSystem& operator=(AttackCooldownSystem const&) = delete;
    AttackCooldownSystem(AttackCooldownSystem const&)            = delete;
    AttackCooldownSystem()                                       = delete;

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
     * @symbol ?tick\@AttackCooldownSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
