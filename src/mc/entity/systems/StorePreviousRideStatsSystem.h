#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct LocalPlayerComponent;
struct PassengerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
// clang-format on

class StorePreviousRideStatsSystem {
public:
    // prevent constructor by default
    StorePreviousRideStatsSystem& operator=(StorePreviousRideStatsSystem const&);
    StorePreviousRideStatsSystem(StorePreviousRideStatsSystem const&);
    StorePreviousRideStatsSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _storePreviousRideStats(
        ::StrictEntityContext const&,
        ::StateVectorComponent const&     stateVectorComponent,
        ::VanillaClientGameplayComponent& vanillaClientGameplayComponent
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
