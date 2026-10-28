#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PointLighting {

class StaticLightTransitionManager {
public:
    // StaticLightTransitionManager inner types declare
    // clang-format off
    struct PropagationResult;
    struct PendingTask;
    struct InFlightTaskGuard;
    // clang-format on

    // StaticLightTransitionManager inner types define
    struct PropagationResult {};

    struct PendingTask {};

    struct InFlightTaskGuard {};
};

} // namespace PointLighting
