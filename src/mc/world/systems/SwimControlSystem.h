#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SwimControlSystem {

public:
    // prevent constructor by default
    SwimControlSystem& operator=(SwimControlSystem const&) = delete;
    SwimControlSystem(SwimControlSystem const&)            = delete;
    SwimControlSystem()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?create\@SwimControlSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol
     * ?tick\@SwimControlSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUSynchedActorDataComponent\@\@AEBUAbilitiesComponent\@\@AEBUActorRotationComponent\@\@AEBUMoveInputComponent\@\@AEAUStateVectorComponent\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void
    tick(class StrictEntityContext const&, struct SynchedActorDataComponent const&, struct AbilitiesComponent const&, struct ActorRotationComponent const&, struct MoveInputComponent const&, struct StateVectorComponent&, class IConstBlockSource const&);
    // NOLINTEND
};
