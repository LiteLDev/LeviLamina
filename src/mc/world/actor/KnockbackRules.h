#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
class Mob;
class Vec3;
// clang-format on

namespace KnockbackRules {
// functions
// NOLINTBEGIN
MCNAPI void doKnockbackAttack(::Mob& self, ::Mob& target, ::Vec3 const& direction, float force, float heightCap);

MCNAPI bool useLegacyKnockback(::Level const& level);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI float const& KNOCKBACK_DAMPENING();
// NOLINTEND

} // namespace KnockbackRules
