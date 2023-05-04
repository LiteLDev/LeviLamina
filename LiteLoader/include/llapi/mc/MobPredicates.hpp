/**
 * @file  MobPredicates.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace MobPredicates {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_mobHasFamilies\@MobPredicates\@\@YA_NAEBUActorTargetFilter\@\@AEAVActor\@\@\@Z
     */
    MCAPI bool _mobHasFamilies(struct ActorTargetFilter const &, class Actor &);
    /**
     * @symbol ?_mobHoldingItem\@MobPredicates\@\@YA_NAEBUActorTargetFilter\@\@AEAVActor\@\@\@Z
     */
    MCAPI bool _mobHoldingItem(struct ActorTargetFilter const &, class Actor &);
    /**
     * @symbol ?_mobWearingArmor\@MobPredicates\@\@YA_NAEBUActorTargetFilter\@\@AEAVActor\@\@\@Z
     */
    MCAPI bool _mobWearingArmor(struct ActorTargetFilter const &, class Actor &);

};