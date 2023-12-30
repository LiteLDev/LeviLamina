#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SitComponent {
public:
    // prevent constructor by default
    SitComponent& operator=(SitComponent const&);
    SitComponent(SitComponent const&);
    SitComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getInteraction@SitComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& actor, class Player& player, class ActorInteraction& interaction);

    // NOLINTEND
};
