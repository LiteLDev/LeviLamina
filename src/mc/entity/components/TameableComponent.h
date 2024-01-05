#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TameableComponent {
public:
    // prevent constructor by default
    TameableComponent& operator=(TameableComponent const&);
    TameableComponent(TameableComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TameableComponent@@QEAA@XZ
    MCAPI TameableComponent();

    // symbol: ?getInteraction@TameableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // symbol: ?tame@TameableComponent@@QEAAXAEAVActor@@AEAVPlayer@@@Z
    MCAPI void tame(class Actor& owner, class Player& player);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_attemptToTame@TameableComponent@@AEAA_NAEAVActor@@AEAVPlayer@@@Z
    MCAPI bool _attemptToTame(class Actor& owner, class Player& player);

    // symbol: ?_canTame@TameableComponent@@AEAA_NAEAVActor@@AEAVPlayer@@@Z
    MCAPI bool _canTame(class Actor& owner, class Player& player);

    // symbol: ?_becomeTame@TameableComponent@@CAXAEAVActor@@@Z
    MCAPI static void _becomeTame(class Actor& owner);

    // NOLINTEND
};
