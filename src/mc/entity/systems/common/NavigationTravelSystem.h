#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"

class NavigationTravelSystem {
public:
    // prevent constructor by default
    NavigationTravelSystem& operator=(NavigationTravelSystem const&);
    NavigationTravelSystem(NavigationTravelSystem const&);
    NavigationTravelSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createNavigationTravelSystem();

    MCAPI static void
        tickNavigationTravelSystem(class ViewT<class StrictEntityContext, class ActorOwnerComponent, struct MobTravelComponent, class NavigationComponent>, class EntityModifier<struct MobTravelComponent>);

    // NOLINTEND
};
