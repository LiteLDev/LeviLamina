#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VRBobControlSystemInternal {
// NOLINTBEGIN
// symbol:
// ?tickVRBobControl@VRBobControlSystemInternal@@YAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUMovementAbilitiesComponent@@AEBUPlayerInputModeComponent@@AEAUStateVectorComponent@@AEBVIConstBlockSource@@@Z
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
