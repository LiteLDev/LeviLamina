#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Vec2;
class Vec3;
struct KnockbackParameters;
// clang-format on

namespace KnockbackUtility {
// functions
// NOLINTBEGIN
MCNAPI ::Vec2 getExtraKnockbackDirection(::Vec2 const& currentDirection, ::Actor const* source, ::Actor const& target);

MCNAPI ::std::pair<::Vec2, ::KnockbackParameters> getKnockbackDirectionAndParameters(
    ::Vec2 const&  angle,
    ::Actor const& attacker,
    ::Actor const& target,
    ::Vec3 const&  attackerAimDirection
);

MCNAPI float getScaledKnockbackForce(::Actor const& actor, float knockbackPower);

MCNAPI bool shouldReceiveKnockback(::Mob const& mob);
// NOLINTEND

} // namespace KnockbackUtility
