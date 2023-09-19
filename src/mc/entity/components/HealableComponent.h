#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HealableComponent {
public:
    // prevent constructor by default
    HealableComponent& operator=(HealableComponent const&);
    HealableComponent(HealableComponent const&);
    HealableComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getInteraction@HealableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_useFeedItem@HealableComponent@@AEAAXAEAVActor@@AEAVPlayer@@AEBUFeedItem@@@Z
    MCAPI void _useFeedItem(class Actor&, class Player&, struct FeedItem const&);

    // symbol: ?_canHeal@HealableComponent@@CA_NAEAVActor@@AEBVItemStack@@PEBVHealableDefinition@@@Z
    MCAPI static bool _canHeal(class Actor&, class ItemStack const&, class HealableDefinition const*);

    // NOLINTEND
};
