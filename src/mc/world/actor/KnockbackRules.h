#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Mob;
namespace KnockbackRules { struct KnockbackAttackOptions; }
// clang-format on

namespace KnockbackRules {
// functions
// NOLINTBEGIN
MCAPI void calculateAndApplyMobKnockbackAttack(::Mob& owner, ::Mob& target);

MCAPI void calculateAndApplyPlayerKnockbackAttack(::Mob& owner, ::Mob& target, bool addSprintingKnockback);

MCAPI void doKnockbackAttack(::KnockbackRules::KnockbackAttackOptions const& options);

MCAPI float getScaledKnockbackForce(::Actor const& actor, float knockbackPower);

MCAPI bool isKnockbackResistant(::Actor const& actor);

MCAPI bool shouldReceiveKnockback(::Mob const& mob);

MCAPI bool useLegacyKnockback(::Level const& level);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI float const& DEFAULT_VERTICAL_VELOCITY_CAP();
// NOLINTEND

} // namespace KnockbackRules
