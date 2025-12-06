#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
// clang-format on

namespace AttackGoalUtility {
// functions
// NOLINTBEGIN
MCAPI ::AABB getTargetHitbox(::Actor const& target);

MCAPI bool isInSunlight(::Actor const& actor);
// NOLINTEND

} // namespace AttackGoalUtility
