#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GiveableComponent {
public:
    // prevent constructor by default
    GiveableComponent& operator=(GiveableComponent const&);
    GiveableComponent(GiveableComponent const&);
    GiveableComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getInteraction@GiveableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // NOLINTEND
};
