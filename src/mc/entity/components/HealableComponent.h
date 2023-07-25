#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HealableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEALABLECOMPONENT
public:
    HealableComponent& operator=(HealableComponent const&) = delete;
    HealableComponent(HealableComponent const&)            = delete;
    HealableComponent()                                    = delete;
#endif

public:
    /**
     * @symbol ?getInteraction\@HealableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);

    // private:
    /**
     * @symbol ?_useFeedItem\@HealableComponent\@\@AEAAXAEAVActor\@\@AEAVPlayer\@\@AEBUFeedItem\@\@\@Z
     */
    MCAPI void _useFeedItem(class Actor&, class Player&, struct FeedItem const&);
    /**
     * @symbol ?_canHeal\@HealableComponent\@\@CA_NAEAVActor\@\@AEBVItemStack\@\@PEBVHealableDefinition\@\@\@Z
     */
    MCAPI static bool _canHeal(class Actor&, class ItemStack const&, class HealableDefinition const*);

private:
};
