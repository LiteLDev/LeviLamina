#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEffectSystem {

public:
    // prevent constructor by default
    MobEffectSystem& operator=(MobEffectSystem const&) = delete;
    MobEffectSystem(MobEffectSystem const&)            = delete;
    MobEffectSystem()                                  = delete;

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
     * @symbol ?tick\@MobEffectSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_tickComponent\@MobEffectSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVMobEffectComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class MobEffectComponent&); // NOLINT

private:
};
