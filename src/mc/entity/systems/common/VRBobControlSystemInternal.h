#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VRBobControlSystemInternal {
// NOLINTBEGIN
MCAPI void tickVRBobControl(
    class StrictEntityContext const&,
    struct AABBShapeComponent const&,
    struct MovementAbilitiesComponent const&,
    struct PlayerInputModeComponent const&,
    struct StateVectorComponent&,
    class IConstBlockSource const& region
);
// NOLINTEND

}; // namespace VRBobControlSystemInternal
