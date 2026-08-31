#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Mob;
class Vec2;
// clang-format on

namespace KnockbackRules {
// functions
// NOLINTBEGIN
MCAPI ::Vec2 getExtraKnockbackDirection(::Vec2 const& currentDirection, ::Actor const* source, ::Actor const& target);

MCAPI bool shouldReceiveKnockback(::Mob const& mob);

MCAPI bool useLegacyKnockback(::Level const& level);
// NOLINTEND

} // namespace KnockbackRules
