#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

class NavigationTravelSystem {
public:
    // prevent constructor by default
    NavigationTravelSystem& operator=(NavigationTravelSystem const&);
    NavigationTravelSystem(NavigationTravelSystem const&);
    NavigationTravelSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createNavigationTravelSystem();

    MCAPI static void tickNavigationTravelSystem(
        class ViewT<
            class StrictEntityContext,
            class ActorOwnerComponent,
            struct MobTravelComponent,
            class NavigationComponent>                  view,
        class EntityModifier<struct MobTravelComponent> mod
    );

    // NOLINTEND
};
