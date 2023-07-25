#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EyeOfEnderPreNormalTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EYEOFENDERPRENORMALTICKSYSTEM
public:
    EyeOfEnderPreNormalTickSystem& operator=(EyeOfEnderPreNormalTickSystem const&) = delete;
    EyeOfEnderPreNormalTickSystem(EyeOfEnderPreNormalTickSystem const&)            = delete;
    EyeOfEnderPreNormalTickSystem()                                                = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@EyeOfEnderPreNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doEyeOfEnderPreNormalTickSystem\@EyeOfEnderPreNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doEyeOfEnderPreNormalTickSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

private:
};
