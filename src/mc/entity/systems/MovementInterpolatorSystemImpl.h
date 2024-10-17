#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MovementInterpolatorSystemImpl {
public:
    // prevent constructor by default
    MovementInterpolatorSystemImpl& operator=(MovementInterpolatorSystemImpl const&);
    MovementInterpolatorSystemImpl(MovementInterpolatorSystemImpl const&);
    MovementInterpolatorSystemImpl();

public:
    // NOLINTBEGIN
    MCAPI static void _onGroundPostTick(
        class StrictEntityContext const&,
        struct MovementInterpolatorComponent const& movementInterpolatorComponent,
        struct StateVectorComponent&                stateVectorComponent
    );

    MCAPI static std::tuple<class Vec3, float>
    _tickPosition(struct MovementInterpolatorComponent&, class Vec3 const&, float);

    MCAPI static std::tuple<class Vec2, class Vec2>
    _tickRotation(struct MovementInterpolatorComponent&, class Vec2 const&, class Vec2 const&);

    // NOLINTEND
};
