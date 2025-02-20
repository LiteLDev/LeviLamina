#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Vec3;
// clang-format on

namespace KnockbackRules {
// functions
// NOLINTBEGIN
MCAPI void doKnockbackAttack(::Mob& self, ::Mob& target, ::Vec3 const& direction, float force, float heightCap);

MCAPI float getScaledKnockbackForce(::Actor const& actor, float knockbackPower);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI float const& KNOCKBACK_DAMPENING();
// NOLINTEND

} // namespace KnockbackRules
