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
    MCAPI void onBarterItemPickedUp(class Actor const& owner, struct ActorUniqueID actorUniqueID, short barterItemId);

    MCAPI void stopBarter();

    // NOLINTEND
};
