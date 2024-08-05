#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LeashableComponent {
public:
    // prevent constructor by default
    LeashableComponent& operator=(LeashableComponent const&);
    LeashableComponent(LeashableComponent const&);
    LeashableComponent();

public:
    // NOLINTBEGIN
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    MCAPI void leash(class Actor& owner, class Actor& leashHolder);

    MCAPI void unleash(class Actor& owner);

    // NOLINTEND
};
