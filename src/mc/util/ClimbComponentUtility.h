#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ClimbComponentUtility {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void updateCanClimbFromActorFlags(::EntityContext& entity);
#endif

MCNAPI void updateWallClimbingFromActorFlags(::EntityContext& entity);
// NOLINTEND

} // namespace ClimbComponentUtility
