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
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _storePreviousRideStats(::StrictEntityContext const&, ::StateVectorComponent const& stateVectorComponent, ::VanillaClientGameplayComponent& vanillaClientGameplayComponent);

    MCNAPI static void _tickStorePreviousRideStatsSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::LocalPlayerComponent, ::PassengerComponent>, ::StateVectorComponent const, ::VanillaClientGameplayComponent> view);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND

};
