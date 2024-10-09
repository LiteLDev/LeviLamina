#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TameableComponent {
public:
    // prevent constructor by default
    TameableComponent& operator=(TameableComponent const&);
    TameableComponent(TameableComponent const&);

public:
    // NOLINTBEGIN
    MCAPI TameableComponent();

    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    MCAPI void tame(class Actor& owner, class Player& player);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _attemptToTame(class Actor& owner, class Player& player);

    MCAPI bool _canTame(class Actor& owner, class Player& player);

    MCAPI static void _becomeTame(class Actor& owner);

    // NOLINTEND
};
