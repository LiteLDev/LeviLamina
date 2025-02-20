#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec2;
struct MovementInterpolatorComponent;
struct StateVectorComponent;
// clang-format on

struct MovementInterpolatorSystemImpl {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _onGroundPostTick(
        ::StrictEntityContext const&,
        ::MovementInterpolatorComponent const& movementInterpolatorComponent,
        ::StateVectorComponent&                stateVectorComponent
    );

    MCAPI static float _tickHeadYaw(::MovementInterpolatorComponent& movementInterpolatorComponent, float yHeadRot);

    MCAPI static ::std::tuple<::Vec2, ::Vec2> _tickRotation(
        ::MovementInterpolatorComponent& movementInterpolatorComponent,
        ::Vec2 const&                    actorCurrentRotation,
        ::Vec2 const&                    actorPreviousRotation
    );
    // NOLINTEND
};
