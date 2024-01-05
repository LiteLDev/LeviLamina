#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IllagerBeastBlockedComponent {
public:
    // prevent constructor by default
    IllagerBeastBlockedComponent& operator=(IllagerBeastBlockedComponent const&);
    IllagerBeastBlockedComponent(IllagerBeastBlockedComponent const&);
    IllagerBeastBlockedComponent();

public:
    // NOLINTBEGIN
    // symbol: ?initFromDefinition@IllagerBeastBlockedComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor&);

    // symbol: ?onBlocked@IllagerBeastBlockedComponent@@QEAAXAEAVActor@@AEBVActorDamageSource@@0@Z
    MCAPI void onBlocked(class Actor& owner, class ActorDamageSource const& source, class Actor& blocker);

    // NOLINTEND
};
