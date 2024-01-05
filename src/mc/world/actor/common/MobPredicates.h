#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobPredicates {
// NOLINTBEGIN
// symbol: ?_mobHasFamilies@MobPredicates@@YA_NAEBUActorTargetFilter@@AEAVActor@@@Z
MCAPI bool _mobHasFamilies(struct ActorTargetFilter const& condition, class Actor& entity);

// symbol: ?_mobHoldingItem@MobPredicates@@YA_NAEBUActorTargetFilter@@AEAVActor@@@Z
MCAPI bool _mobHoldingItem(struct ActorTargetFilter const& condition, class Actor& entity);

// symbol: ?_mobWearingArmor@MobPredicates@@YA_NAEBUActorTargetFilter@@AEAVActor@@@Z
MCAPI bool _mobWearingArmor(struct ActorTargetFilter const& condition, class Actor& entity);
// NOLINTEND

}; // namespace MobPredicates
