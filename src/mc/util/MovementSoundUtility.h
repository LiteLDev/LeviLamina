#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SynchedActorDataEntityWrapper;
class Vec3;
// clang-format on

namespace MovementSoundUtility {
// functions
// NOLINTBEGIN
MCNAPI float calculateSwimSpeed(::Vec3 const& delta);

MCNAPI float climbingMoveDistance(::Vec3 const& delta);

MCNAPI float getNextStep(::SynchedActorDataEntityWrapper const& synchedActorData, float moveDistance);

MCNAPI float movingMoveDistance(::Vec3 const& delta);

MCNAPI float scaffoldingMoveDistance(::Vec3 const& delta);
// NOLINTEND

} // namespace MovementSoundUtility
