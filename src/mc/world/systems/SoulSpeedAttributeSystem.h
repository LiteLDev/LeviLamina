#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoulSpeedAttributeSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOULSPEEDATTRIBUTESYSTEM
public:
    SoulSpeedAttributeSystem& operator=(SoulSpeedAttributeSystem const&) = delete;
    SoulSpeedAttributeSystem(SoulSpeedAttributeSystem const&)            = delete;
    SoulSpeedAttributeSystem()                                           = delete;
#endif

public:
    /**
     * @symbol
     * ?_tryProcessSoulSpeed\@SoulSpeedAttributeSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tryProcessSoulSpeed(class StrictEntityContext&, class ActorOwnerComponent&);
    /**
     * @symbol ?createSystem\@SoulSpeedAttributeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
