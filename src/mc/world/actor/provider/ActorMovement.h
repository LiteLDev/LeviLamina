#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorMovement {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI float getPredictedWalkDist(::EntityContext const& entity, float alpha);
#endif

MCAPI void setHasTeleported(::EntityContext& entity, bool newValue);
// NOLINTEND

} // namespace ActorMovement
