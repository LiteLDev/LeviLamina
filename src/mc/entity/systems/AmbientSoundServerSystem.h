#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AmbientSoundServerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMBIENTSOUNDSERVERSYSTEM
public:
    AmbientSoundServerSystem& operator=(AmbientSoundServerSystem const&) = delete;
    AmbientSoundServerSystem(AmbientSoundServerSystem const&)            = delete;
    AmbientSoundServerSystem()                                           = delete;
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
     * @symbol ?tick\@AmbientSoundServerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol
     * ?_tickAmbientSoundComponent\@AmbientSoundServerSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVAmbientSoundServerComponent\@\@\@Z
     */
    MCAPI static void _tickAmbientSoundComponent(class ActorOwnerComponent&, class AmbientSoundServerComponent&);

private:
};
