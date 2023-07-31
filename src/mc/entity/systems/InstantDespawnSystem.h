#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InstantDespawnSystem {

public:
    // prevent constructor by default
    InstantDespawnSystem& operator=(InstantDespawnSystem const&) = delete;
    InstantDespawnSystem(InstantDespawnSystem const&)            = delete;
    InstantDespawnSystem()                                       = delete;

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
     * @symbol ?tick\@InstantDespawnSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol ?createInstantDespawningPlayerCleanupSystem\@InstantDespawnSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createInstantDespawningPlayerCleanupSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_tickComponent\@InstantDespawnSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVInstantDespawnComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class InstantDespawnComponent&);
    // NOLINTEND
};
