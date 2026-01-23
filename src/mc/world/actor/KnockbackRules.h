#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
namespace KnockbackRules { struct KnockbackAttackOptions; }
// clang-format on

namespace KnockbackRules {
// functions
// NOLINTBEGIN
MCAPI void calculateAndApplyPlayerKnockbackAttack(::Mob& owner, ::Mob& target, bool addSprintingKnockback);

MCAPI void doKnockbackAttack(::KnockbackRules::KnockbackAttackOptions const& options);

MCAPI float getScaledKnockbackForce(::Actor const& actor, float knockbackPower);

MCAPI bool shouldApplyKnockback(::Mob const& mob);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI float const& KNOCKBACK_DAMPENING();
// NOLINTEND

} // namespace KnockbackRules
