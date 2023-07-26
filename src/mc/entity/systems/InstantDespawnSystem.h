#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InstantDespawnSystem {

public:
    // prevent constructor by default
    InstantDespawnSystem& operator=(InstantDespawnSystem const&) = delete;
    InstantDespawnSystem(InstantDespawnSystem const&)            = delete;
    InstantDespawnSystem()                                       = delete;

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
     * @symbol ?tick\@InstantDespawnSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
    /**
     * @symbol ?createInstantDespawningPlayerCleanupSystem\@InstantDespawnSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createInstantDespawningPlayerCleanupSystem(); // NOLINT

    // private:
    /**
     * @symbol ?_tickComponent\@InstantDespawnSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVInstantDespawnComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class InstantDespawnComponent&); // NOLINT

private:
};
