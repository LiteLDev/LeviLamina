#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EyeOfEnderPreNormalTickSystem {

public:
    // prevent constructor by default
    EyeOfEnderPreNormalTickSystem& operator=(EyeOfEnderPreNormalTickSystem const&) = delete;
    EyeOfEnderPreNormalTickSystem(EyeOfEnderPreNormalTickSystem const&)            = delete;
    EyeOfEnderPreNormalTickSystem()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@EyeOfEnderPreNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_doEyeOfEnderPreNormalTickSystem\@EyeOfEnderPreNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doEyeOfEnderPreNormalTickSystem(class StrictEntityContext const&, class ActorOwnerComponent&);
    // NOLINTEND
};
