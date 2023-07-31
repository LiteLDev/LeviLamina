#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GlobalActorLegacyTickSystem {

public:
    // prevent constructor by default
    GlobalActorLegacyTickSystem& operator=(GlobalActorLegacyTickSystem const&) = delete;
    GlobalActorLegacyTickSystem(GlobalActorLegacyTickSystem const&)            = delete;
    GlobalActorLegacyTickSystem()                                              = delete;

public:
    // NOLINTBEGIN
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
     * @symbol ?tick\@GlobalActorLegacyTickSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
