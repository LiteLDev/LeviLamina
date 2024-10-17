#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BalloonableComponent {
public:
    // prevent constructor by default
    BalloonableComponent& operator=(BalloonableComponent const&);
    BalloonableComponent(BalloonableComponent const&);
    BalloonableComponent();

public:
    // NOLINTBEGIN
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool attach(class Actor& owner, class Actor& attacher, class ItemStack& item);

    // NOLINTEND
};
