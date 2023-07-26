#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoulSpeedAttributeSystem {

public:
    // prevent constructor by default
    SoulSpeedAttributeSystem& operator=(SoulSpeedAttributeSystem const&) = delete;
    SoulSpeedAttributeSystem(SoulSpeedAttributeSystem const&)            = delete;
    SoulSpeedAttributeSystem()                                           = delete;

public:
    /**
     * @symbol
     * ?_tryProcessSoulSpeed\@SoulSpeedAttributeSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tryProcessSoulSpeed(class StrictEntityContext&, class ActorOwnerComponent&); // NOLINT
    /**
     * @symbol ?createSystem\@SoulSpeedAttributeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
