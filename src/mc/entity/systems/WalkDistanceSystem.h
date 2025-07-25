#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MoveRequestComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct WalkDistComponent;
// clang-format on

namespace WalkDistanceSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void updateWalkDistance(
    ::MoveRequestComponent const& moveRequest,
    ::StateVectorComponent const& state,
    ::WalkDistComponent&          walkDistance
);
// NOLINTEND

} // namespace WalkDistanceSystem
