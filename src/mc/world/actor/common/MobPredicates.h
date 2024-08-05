#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobPredicates {
// NOLINTBEGIN
MCAPI bool _mobHasFamilies(struct ActorTargetFilter const& condition, class Actor& entity);

MCAPI bool _mobHoldingItem(struct ActorTargetFilter const& condition, class Actor& entity);

MCAPI bool _mobWearingArmor(struct ActorTargetFilter const& condition, class Actor& entity);
// NOLINTEND

}; // namespace MobPredicates
