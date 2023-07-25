#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailActivatorSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILACTIVATORSYSTEM
public:
    RailActivatorSystem& operator=(RailActivatorSystem const&) = delete;
    RailActivatorSystem(RailActivatorSystem const&)            = delete;
    RailActivatorSystem()                                      = delete;
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
     * @symbol ?tick\@RailActivatorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol
     * ?_tickComponent\@RailActivatorSystem\@\@CAXAEAVEntityContext\@\@AEAVActorOwnerComponent\@\@AEAVRailActivatorComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class EntityContext&, class ActorOwnerComponent&, class RailActivatorComponent&);

private:
};
