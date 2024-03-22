#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class UpdateRenderPosSystem {
public:
    // prevent constructor by default
    UpdateRenderPosSystem& operator=(UpdateRenderPosSystem const&);
    UpdateRenderPosSystem(UpdateRenderPosSystem const&);
    UpdateRenderPosSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@UpdateRenderPosSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doUpdateRenderPosSystem@UpdateRenderPosSystem@@CAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAURenderPositionComponent@@@Z
    MCAPI static void
    _doUpdateRenderPosSystem(class StrictEntityContext const&, struct StateVectorComponent const&, struct RenderPositionComponent&);

    // symbol:
    // ?_tickUpdateRenderPosSystem@UpdateRenderPosSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBUStateVectorComponent@@URenderPositionComponent@@@@@Z
    MCAPI static void
    _tickUpdateRenderPosSystem(class ViewT<
                               class StrictEntityContext,
                               struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                               struct StateVectorComponent const,
                               struct RenderPositionComponent> view);

    // NOLINTEND
};
