#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrustingComponent {
public:
    // prevent constructor by default
    TrustingComponent& operator=(TrustingComponent const&);
    TrustingComponent(TrustingComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TrustingComponent@@QEAA@XZ
    MCAPI TrustingComponent();

    // symbol: ?getInteraction@TrustingComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_becomeTrusting@TrustingComponent@@AEAAXAEAVActor@@@Z
    MCAPI void _becomeTrusting(class Actor& owner);

    // NOLINTEND
};
