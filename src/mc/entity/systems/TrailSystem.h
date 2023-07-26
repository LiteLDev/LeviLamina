#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrailSystem {

public:
    // prevent constructor by default
    TrailSystem& operator=(TrailSystem const&) = delete;
    TrailSystem(TrailSystem const&)            = delete;
    TrailSystem()                              = delete;

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
     * @symbol ?tick\@TrailSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_tickComponent\@TrailSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVTrailComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class TrailComponent&); // NOLINT

private:
};
