#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace KnockbackRules { struct KnockbackAttackOptions; }
// clang-format on

namespace KnockbackRules {
// functions
// NOLINTBEGIN
MCAPI void doKnockbackAttack(::KnockbackRules::KnockbackAttackOptions const& options);

MCAPI float getScaledKnockbackForce(::Actor const& actor, float knockbackPower);

MCAPI bool isKnockbackResistant(::Actor const& actor);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI float const& KNOCKBACK_DAMPENING();
// NOLINTEND

} // namespace KnockbackRules
