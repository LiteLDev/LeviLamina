#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GlobalActorLegacyTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOBALACTORLEGACYTICKSYSTEM
public:
    GlobalActorLegacyTickSystem& operator=(GlobalActorLegacyTickSystem const&) = delete;
    GlobalActorLegacyTickSystem(GlobalActorLegacyTickSystem const&)            = delete;
    GlobalActorLegacyTickSystem()                                              = delete;
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
     * @symbol ?tick\@GlobalActorLegacyTickSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
