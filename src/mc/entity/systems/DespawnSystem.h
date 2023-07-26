#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DespawnSystem {

public:
    // prevent constructor by default
    DespawnSystem& operator=(DespawnSystem const&) = delete;
    DespawnSystem(DespawnSystem const&)            = delete;
    DespawnSystem()                                = delete;

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
     * @symbol ?tick\@DespawnSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_tickComponent\@DespawnSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVDespawnComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class DespawnComponent&); // NOLINT

private:
};
