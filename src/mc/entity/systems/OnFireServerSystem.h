#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnFireServerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFIRESERVERSYSTEM
public:
    OnFireServerSystem& operator=(OnFireServerSystem const&) = delete;
    OnFireServerSystem(OnFireServerSystem const&)            = delete;
    OnFireServerSystem()                                     = delete;
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
     * @symbol ?tick\@OnFireServerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol
     * ?_tickServer\@OnFireServerSystem\@\@CAXAEAVEntityContext\@\@AEAVActorOwnerComponent\@\@AEAUOnFireComponent\@\@\@Z
     */
    MCAPI static void _tickServer(class EntityContext&, class ActorOwnerComponent&, struct OnFireComponent&);

private:
};
