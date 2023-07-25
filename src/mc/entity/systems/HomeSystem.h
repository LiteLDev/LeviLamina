#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HomeSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOMESYSTEM
public:
    HomeSystem& operator=(HomeSystem const&) = delete;
    HomeSystem(HomeSystem const&)            = delete;
    HomeSystem()                             = delete;
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
     * @symbol ?tick\@HomeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol ?_tickComponent\@HomeSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVHomeComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class HomeComponent&);

private:
};
