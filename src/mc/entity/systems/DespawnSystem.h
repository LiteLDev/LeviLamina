#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DespawnSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESPAWNSYSTEM
public:
    DespawnSystem& operator=(DespawnSystem const&) = delete;
    DespawnSystem(DespawnSystem const&)            = delete;
    DespawnSystem()                                = delete;
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
     * @symbol ?tick\@DespawnSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol ?_tickComponent\@DespawnSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVDespawnComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class DespawnComponent&);

private:
};
