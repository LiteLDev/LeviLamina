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
MCNAPI bool _mobHasFamilies(::ActorTargetFilter const& condition, ::Actor& entity);

MCNAPI bool _mobHoldingItem(::ActorTargetFilter const& condition, ::Actor& entity);

MCNAPI bool _mobWearingArmor(::ActorTargetFilter const& condition, ::Actor& entity);
// NOLINTEND

}
