#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace KnockbackRules {
// NOLINTBEGIN
// symbol: ?doKnockbackAttack@KnockbackRules@@YAXAEAVMob@@0AEBVVec2@@MM@Z
MCAPI void
doKnockbackAttack(class Mob& self, class Mob& target, class Vec2 const& direction, float force, float heightCap);

// symbol: ?doKnockbackAttack@KnockbackRules@@YAXAEAVMob@@0AEBVVec3@@MM@Z
MCAPI void
doKnockbackAttack(class Mob& self, class Mob& target, class Vec3 const& direction, float force, float heightCap);

// symbol: ?getScaledKnockbackForce@KnockbackRules@@YAMAEBVActor@@M@Z
MCAPI float getScaledKnockbackForce(class Actor const& actor, float);

// symbol: ?isKnockbackResistant@KnockbackRules@@YA_NAEBVActor@@@Z
MCAPI bool isKnockbackResistant(class Actor const& actor);

// symbol: ?shouldApplyKnockback@KnockbackRules@@YA_NAEBVMob@@@Z
MCAPI bool shouldApplyKnockback(class Mob const& mob);

// symbol: ?useLegacyKnockback@KnockbackRules@@YA_NAEBVLevel@@@Z
MCAPI bool useLegacyKnockback(class Level const& level);
// NOLINTEND

}; // namespace KnockbackRules
