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
MCNAPI void doKnockbackAttack(::KnockbackRules::KnockbackAttackOptions& options);

MCNAPI float getScaledKnockbackForce(::Actor const& actor, float knockbackPower);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI float const& KNOCKBACK_DAMPENING();
// NOLINTEND

} // namespace KnockbackRules
