#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GlideInputSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDEINPUTSYSTEM
public:
    GlideInputSystem& operator=(GlideInputSystem const&) = delete;
    GlideInputSystem(GlideInputSystem const&)            = delete;
    GlideInputSystem()                                   = delete;
#endif

public:
    /**
     * @symbol ?createGlideInputSystem\@GlideInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGlideInputSystem();
    /**
     * @symbol
     * ?doGlideInputSystem\@GlideInputSystem\@\@SAXAEBUAbilitiesComponent\@\@AEBUFallFlyTicksComponent\@\@AEBUMoveInputComponent\@\@AEBUSynchedActorDataComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void
    doGlideInputSystem(struct AbilitiesComponent const&, struct FallFlyTicksComponent const&, struct MoveInputComponent const&, struct SynchedActorDataComponent const&, struct StateVectorComponent&);
};
