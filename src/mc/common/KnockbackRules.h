#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace KnockbackRules {
// NOLINTBEGIN
MCAPI void
doKnockbackAttack(class Mob& self, class Mob& target, class Vec2 const& direction, float force, float heightCap);

MCAPI void
doKnockbackAttack(class Mob& self, class Mob& target, class Vec3 const& direction, float force, float heightCap);

MCAPI float getScaledKnockbackForce(class Actor const& actor, float);

MCAPI bool isKnockbackResistant(class Actor const& actor);

MCAPI bool shouldApplyKnockback(class Mob const& mob);

MCAPI bool useLegacyKnockback(class Level const& level);
// NOLINTEND

}; // namespace KnockbackRules
