#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEffectSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTSYSTEM
public:
    MobEffectSystem& operator=(MobEffectSystem const&) = delete;
    MobEffectSystem(MobEffectSystem const&)            = delete;
    MobEffectSystem()                                  = delete;
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
     * @symbol ?tick\@MobEffectSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol ?_tickComponent\@MobEffectSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVMobEffectComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class MobEffectComponent&);

private:
};
