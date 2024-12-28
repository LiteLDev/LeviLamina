#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct MovementInterpolatorComponent;
struct StateVectorComponent;
// clang-format on

struct MovementInterpolatorSystemImpl {
public:
    // prevent constructor by default
    MovementInterpolatorSystemImpl& operator=(MovementInterpolatorSystemImpl const&);
    MovementInterpolatorSystemImpl(MovementInterpolatorSystemImpl const&);
    MovementInterpolatorSystemImpl();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _onGroundPostTick(
        ::StrictEntityContext const&,
        ::MovementInterpolatorComponent const& movementInterpolatorComponent,
        ::StateVectorComponent&                stateVectorComponent
    );
    // NOLINTEND
};
