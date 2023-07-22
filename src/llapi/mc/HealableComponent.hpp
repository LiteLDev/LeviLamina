/**
 * @file  HealableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HealableComponent.
 *
 */
class HealableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEALABLECOMPONENT
public:
    class HealableComponent& operator=(class HealableComponent const &) = delete;
    HealableComponent(class HealableComponent const &) = delete;
    HealableComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getInteraction\@HealableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);

//private:
    /**
     * @symbol  ?_useFeedItem\@HealableComponent\@\@AEAAXAEAVActor\@\@AEAVPlayer\@\@AEBUFeedItem\@\@\@Z
     */
    MCAPI void _useFeedItem(class Actor &, class Player &, struct FeedItem const &);
    /**
     * @symbol  ?_canHeal\@HealableComponent\@\@CA_NAEAVActor\@\@AEBVItemStack\@\@PEBVHealableDefinition\@\@\@Z
     */
    MCAPI static bool _canHeal(class Actor &, class ItemStack const &, class HealableDefinition const *);

private:

};