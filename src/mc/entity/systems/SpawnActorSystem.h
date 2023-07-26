#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnActorSystem {

public:
    // prevent constructor by default
    SpawnActorSystem& operator=(SpawnActorSystem const&) = delete;
    SpawnActorSystem(SpawnActorSystem const&)            = delete;
    SpawnActorSystem()                                   = delete;

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
     * @symbol ?tick\@SpawnActorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
