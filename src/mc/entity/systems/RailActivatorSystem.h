#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailActivatorSystem {

public:
    // prevent constructor by default
    RailActivatorSystem& operator=(RailActivatorSystem const&) = delete;
    RailActivatorSystem(RailActivatorSystem const&)            = delete;
    RailActivatorSystem()                                      = delete;

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
     * @symbol ?tick\@RailActivatorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_tickComponent\@RailActivatorSystem\@\@CAXAEAVEntityContext\@\@AEAVActorOwnerComponent\@\@AEAVRailActivatorComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class EntityContext&, class ActorOwnerComponent&, class RailActivatorComponent&);
    // NOLINTEND
};
