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
MCNAPI void doKnockbackAttack(::KnockbackRules::KnockbackAttackOptions const& options);

MCNAPI float getScaledKnockbackForce(::Actor const& actor, float knockbackPower);

MCNAPI bool isKnockbackResistant(::Actor const& actor);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI float const& KNOCKBACK_DAMPENING();
// NOLINTEND

}
