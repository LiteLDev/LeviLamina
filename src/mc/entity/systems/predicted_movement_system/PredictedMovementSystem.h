#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AddActorPacket;
class PredictedMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace PredictedMovementSystem {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI void _updateRuntimeData(::PredictedMovementComponent& component);
#endif

MCAPI ::TickingSystemWithInfo createSystem();

#ifdef LL_PLAT_C
MCAPI bool tryAddPredictionMoveData(::AddActorPacket const& packet, ::PredictedMovementComponent* component);
#endif
// NOLINTEND

} // namespace PredictedMovementSystem
