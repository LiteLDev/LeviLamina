#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AmbientSoundServerSystem {

public:
    // prevent constructor by default
    AmbientSoundServerSystem& operator=(AmbientSoundServerSystem const&) = delete;
    AmbientSoundServerSystem(AmbientSoundServerSystem const&)            = delete;
    AmbientSoundServerSystem()                                           = delete;

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
     * @symbol ?tick\@AmbientSoundServerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_tickAmbientSoundComponent\@AmbientSoundServerSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVAmbientSoundServerComponent\@\@\@Z
     */
    MCAPI static void
    _tickAmbientSoundComponent(class ActorOwnerComponent&, class AmbientSoundServerComponent&); // NOLINT

private:
};
