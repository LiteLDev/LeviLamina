#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RaidBossSystem {

public:
    // prevent constructor by default
    RaidBossSystem& operator=(RaidBossSystem const&) = delete;
    RaidBossSystem(RaidBossSystem const&)            = delete;
    RaidBossSystem()                                 = delete;

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
     * @symbol ?tick\@RaidBossSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
