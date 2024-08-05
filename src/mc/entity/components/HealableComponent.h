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
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _useFeedItem(class Actor& owner, class Player& player, struct FeedItem const& feedItem);

    MCAPI static bool _canHeal(class Actor& owner, class ItemStack const& item, class HealableDefinition const*);

    // NOLINTEND
};
