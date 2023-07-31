#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateRenderPosSystem {

public:
    // prevent constructor by default
    UpdateRenderPosSystem& operator=(UpdateRenderPosSystem const&) = delete;
    UpdateRenderPosSystem(UpdateRenderPosSystem const&)            = delete;
    UpdateRenderPosSystem()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@UpdateRenderPosSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_doUpdateRenderPosSystem\@UpdateRenderPosSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEAURenderPositionComponent\@\@\@Z
     */
    MCAPI static void
    _doUpdateRenderPosSystem(class StrictEntityContext const&, struct StateVectorComponent const&, struct RenderPositionComponent&);
    // NOLINTEND
};
