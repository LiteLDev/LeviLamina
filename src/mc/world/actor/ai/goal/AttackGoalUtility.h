#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Mob;
// clang-format on

namespace AttackGoalUtility {
// functions
// NOLINTBEGIN
MCAPI float calculateTargetXZDistanceSquared(::Actor const& attacker, ::Actor const& target);

MCAPI bool canSeeTarget(::Actor const& target, ::Mob& mob);

MCAPI ::AABB getTargetHitbox(::Actor const& target);

MCAPI bool isInSunlight(::Actor const& actor);
// NOLINTEND

} // namespace AttackGoalUtility
