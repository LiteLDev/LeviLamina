#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class UpdateRenderPosSystem {
public:
    // prevent constructor by default
    UpdateRenderPosSystem& operator=(UpdateRenderPosSystem const&);
    UpdateRenderPosSystem(UpdateRenderPosSystem const&);
    UpdateRenderPosSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doUpdateRenderPosSystem(
        class StrictEntityContext const&,
        struct StateVectorComponent const& stateVectorComponent,
        struct RenderPositionComponent&    renderPositionComponent
    );

    MCAPI static void
    _tickUpdateRenderPosSystem(class ViewT<
                               class StrictEntityContext,
                               struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                               struct StateVectorComponent const,
                               struct RenderPositionComponent> view);

    // NOLINTEND
};
