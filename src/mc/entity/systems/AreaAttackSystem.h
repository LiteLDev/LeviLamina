#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AreaAttackSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAATTACKSYSTEM
public:
    AreaAttackSystem& operator=(AreaAttackSystem const&) = delete;
    AreaAttackSystem(AreaAttackSystem const&)            = delete;
    AreaAttackSystem()                                   = delete;
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
     * @symbol ?tick\@AreaAttackSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol ?_tickComponent\@AreaAttackSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVAreaAttackComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class AreaAttackComponent&);

private:
};
