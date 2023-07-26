#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace KnockbackRules {
/**
 * @symbol ?doKnockbackAttack\@KnockbackRules\@\@YAXAEAVMob\@\@0AEBVVec2\@\@MM\@Z
 */
MCAPI void doKnockbackAttack(class Mob&, class Mob&, class Vec2 const&, float, float); // NOLINT
/**
 * @symbol ?doKnockbackAttack\@KnockbackRules\@\@YAXAEAVMob\@\@0AEBVVec3\@\@MM\@Z
 */
MCAPI void doKnockbackAttack(class Mob&, class Mob&, class Vec3 const&, float, float); // NOLINT
/**
 * @symbol ?getScaledKnockbackForce\@KnockbackRules\@\@YAMAEBVActor\@\@M\@Z
 */
MCAPI float getScaledKnockbackForce(class Actor const&, float); // NOLINT
/**
 * @symbol ?isKnockbackResistant\@KnockbackRules\@\@YA_NAEBVActor\@\@\@Z
 */
MCAPI bool isKnockbackResistant(class Actor const&); // NOLINT
/**
 * @symbol ?useLegacyKnockback\@KnockbackRules\@\@YA_NAEBVLevel\@\@\@Z
 */
MCAPI bool useLegacyKnockback(class Level const&); // NOLINT

}; // namespace KnockbackRules
