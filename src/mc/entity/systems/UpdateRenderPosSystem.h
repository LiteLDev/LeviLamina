#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct RenderPositionComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class UpdateRenderPosSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doUpdateRenderPosSystem(
        ::StrictEntityContext const&,
        ::StateVectorComponent const& stateVectorComponent,
        ::RenderPositionComponent&    renderPositionComponent
    );

    MCNAPI static void _tickUpdateRenderPosSystem(::ViewT<
                                                  ::StrictEntityContext,
                                                  ::Include<::ActorMovementTickNeededComponent>,
                                                  ::StateVectorComponent const,
                                                  ::RenderPositionComponent> view);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
