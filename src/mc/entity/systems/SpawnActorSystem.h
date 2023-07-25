#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnActorSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNACTORSYSTEM
public:
    SpawnActorSystem& operator=(SpawnActorSystem const&) = delete;
    SpawnActorSystem(SpawnActorSystem const&)            = delete;
    SpawnActorSystem()                                   = delete;
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
     * @symbol ?tick\@SpawnActorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
