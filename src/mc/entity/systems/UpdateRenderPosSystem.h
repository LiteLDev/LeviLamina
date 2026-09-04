#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct RenderPositionComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class UpdateRenderPosSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doUpdateRenderPosSystem(
        ::StrictEntityContext const&,
        ::StateVectorComponent const& stateVectorComponent,
        ::RenderPositionComponent&    renderPositionComponent
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
