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
    // symbol:
    // ?_onGroundPostTick@MovementInterpolatorSystemImpl@@SAXAEBVStrictEntityContext@@AEBUMovementInterpolatorComponent@@AEAUStateVectorComponent@@@Z
    MCAPI static void
    _onGroundPostTick(class StrictEntityContext const&, struct MovementInterpolatorComponent const&, struct StateVectorComponent&);

    // symbol:
    // ?_tickPosition@MovementInterpolatorSystemImpl@@SA?AV?$tuple@VVec3@@M@std@@AEAUMovementInterpolatorComponent@@AEBVVec3@@M@Z
    MCAPI static std::tuple<class Vec3, float>
    _tickPosition(struct MovementInterpolatorComponent&, class Vec3 const&, float);

    // symbol:
    // ?_tickRotation@MovementInterpolatorSystemImpl@@SA?AV?$tuple@VVec2@@V1@@std@@AEAUMovementInterpolatorComponent@@AEBVVec2@@1@Z
    MCAPI static std::tuple<class Vec2, class Vec2>
    _tickRotation(struct MovementInterpolatorComponent&, class Vec2 const&, class Vec2 const&);

    // NOLINTEND
};
