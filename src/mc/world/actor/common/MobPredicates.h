#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobPredicates {
/**
 * @symbol ?_mobHasFamilies\@MobPredicates\@\@YA_NAEBUActorTargetFilter\@\@AEAVActor\@\@\@Z
 */
MCAPI bool _mobHasFamilies(struct ActorTargetFilter const&, class Actor&); // NOLINT
/**
 * @symbol ?_mobHoldingItem\@MobPredicates\@\@YA_NAEBUActorTargetFilter\@\@AEAVActor\@\@\@Z
 */
MCAPI bool _mobHoldingItem(struct ActorTargetFilter const&, class Actor&); // NOLINT
/**
 * @symbol ?_mobWearingArmor\@MobPredicates\@\@YA_NAEBUActorTargetFilter\@\@AEAVActor\@\@\@Z
 */
MCAPI bool _mobWearingArmor(struct ActorTargetFilter const&, class Actor&); // NOLINT

}; // namespace MobPredicates
