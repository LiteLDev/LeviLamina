#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class MobEffectSystem : public ::ITickingSystem {

public:
    // prevent constructor by default
    MobEffectSystem& operator=(MobEffectSystem const&) = delete;
    MobEffectSystem(MobEffectSystem const&)            = delete;
    MobEffectSystem()                                  = delete;

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
     * @symbol ?tick\@MobEffectSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_tickComponent\@MobEffectSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVMobEffectComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class MobEffectComponent&);
    // NOLINTEND
};
