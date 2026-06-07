#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec2;
struct KnockbackParameters;
// clang-format on

namespace ApplyKnockbackRulesUtility {
// functions
// NOLINTBEGIN
MCNAPI ::std::pair<::Vec2, ::KnockbackParameters>
getKnockbackDirectionAndParameters(::Vec2 const& originalAngle, ::Actor const& attacker, ::Actor const& target);
// NOLINTEND

} // namespace ApplyKnockbackRulesUtility
