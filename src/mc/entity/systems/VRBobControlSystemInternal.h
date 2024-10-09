#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VRBobControlSystemInternal {
// NOLINTBEGIN
MCAPI void tickVRBobControl(
    class StrictEntityContext const&,
    struct AABBShapeComponent const&         aabbShapeComponent,
    struct MovementAbilitiesComponent const& abilitiesComponent,
    struct PlayerInputModeComponent const&   playerInputModeComponent,
    struct StateVectorComponent&             stateVectorComponent,
    class IConstBlockSource const&           region
);
// NOLINTEND

}; // namespace VRBobControlSystemInternal
