#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct MovementAbilitiesComponent;
struct PlayerInputModeComponent;
struct StateVectorComponent;
// clang-format on

namespace VRBobControlSystemInternal {
// functions
// NOLINTBEGIN
MCNAPI void tickVRBobControl(
    ::StrictEntityContext const&,
    ::AABBShapeComponent const&         aabbShapeComponent,
    ::MovementAbilitiesComponent const& abilitiesComponent,
    ::PlayerInputModeComponent const&   playerInputModeComponent,
    ::StateVectorComponent&             stateVectorComponent,
    ::IConstBlockSource const&          region
);
// NOLINTEND

} // namespace VRBobControlSystemInternal
