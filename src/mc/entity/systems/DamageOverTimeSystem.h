#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DamageOverTimeSystem {

public:
    // prevent constructor by default
    DamageOverTimeSystem& operator=(DamageOverTimeSystem const&) = delete;
    DamageOverTimeSystem(DamageOverTimeSystem const&)            = delete;
    DamageOverTimeSystem()                                       = delete;

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
     * @symbol ?tick\@DamageOverTimeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
