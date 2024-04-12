#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BarterComponent {
public:
    // prevent constructor by default
    BarterComponent& operator=(BarterComponent const&);
    BarterComponent(BarterComponent const&);
    BarterComponent();

public:
    // NOLINTBEGIN
    // symbol: ?onBarterItemPickedUp@BarterComponent@@QEAAXAEBVActor@@UActorUniqueID@@F@Z
    MCAPI void onBarterItemPickedUp(class Actor const& owner, struct ActorUniqueID actorUniqueID, short barterItemId);

    // symbol: ?stopBarter@BarterComponent@@QEAAXXZ
    MCAPI void stopBarter();

    // NOLINTEND
};
