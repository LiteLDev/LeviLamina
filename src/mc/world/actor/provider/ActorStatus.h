#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorStatus {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI bool canDash(::EntityContext const& entity);
#endif

MCAPI bool hasDashCooldown(::EntityContext const& entity);

MCAPI void setCanDash(bool value, ::EntityContext& entity);

MCAPI void setHasDashCooldown(bool value, ::EntityContext& entity);
// NOLINTEND

} // namespace ActorStatus
