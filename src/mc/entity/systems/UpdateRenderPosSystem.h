#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateRenderPosSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATERENDERPOSSYSTEM
public:
    UpdateRenderPosSystem& operator=(UpdateRenderPosSystem const&) = delete;
    UpdateRenderPosSystem(UpdateRenderPosSystem const&)            = delete;
    UpdateRenderPosSystem()                                        = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@UpdateRenderPosSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doUpdateRenderPosSystem\@UpdateRenderPosSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEAURenderPositionComponent\@\@\@Z
     */
    MCAPI static void
    _doUpdateRenderPosSystem(class StrictEntityContext const&, struct StateVectorComponent const&, struct RenderPositionComponent&);

private:
};
