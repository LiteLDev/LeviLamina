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
    // symbol: ?getInteraction@LeashableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // symbol: ?leash@LeashableComponent@@QEAAXAEAVActor@@0@Z
    MCAPI void leash(class Actor& owner, class Actor& leashHolder);

    // symbol: ?unleash@LeashableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void unleash(class Actor& owner);

    // NOLINTEND
};
