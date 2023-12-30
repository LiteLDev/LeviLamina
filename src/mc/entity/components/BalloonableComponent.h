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
    // symbol: ?getInteraction@BalloonableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?attach@BalloonableComponent@@AEAA_NAEAVActor@@0AEAVItemStack@@@Z
    MCAPI bool attach(class Actor& owner, class Actor& attacher, class ItemStack& item);

    // NOLINTEND
};
