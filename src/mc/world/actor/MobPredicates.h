#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorTargetFilter;
// clang-format on

namespace MobPredicates {
// functions
// NOLINTBEGIN
MCAPI bool _mobHasFamilies(::ActorTargetFilter const& condition, ::Actor& entity);

MCAPI bool _mobHoldingItem(::ActorTargetFilter const& condition, ::Actor& entity);

MCAPI bool _mobWearingArmor(::ActorTargetFilter const& condition, ::Actor& entity);
// NOLINTEND

} // namespace MobPredicates
