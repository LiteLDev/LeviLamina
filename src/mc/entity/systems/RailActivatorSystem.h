#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailActivatorSystem {

public:
    // prevent constructor by default
    RailActivatorSystem& operator=(RailActivatorSystem const&) = delete;
    RailActivatorSystem(RailActivatorSystem const&)            = delete;
    RailActivatorSystem()                                      = delete;

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
     * @symbol ?tick\@RailActivatorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_tickComponent\@RailActivatorSystem\@\@CAXAEAVEntityContext\@\@AEAVActorOwnerComponent\@\@AEAVRailActivatorComponent\@\@\@Z
     */
    MCAPI static void
    _tickComponent(class EntityContext&, class ActorOwnerComponent&, class RailActivatorComponent&); // NOLINT

private:
};
