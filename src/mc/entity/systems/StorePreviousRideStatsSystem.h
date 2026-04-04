#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct InterpolateMovementNeededComponent;
struct LocalPlayerComponent;
struct PassengerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
// clang-format on

class StorePreviousRideStatsSystem {
public:
    // StorePreviousRideStatsSystem inner types define
    using PassengerView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::LocalPlayerComponent, ::PassengerComponent>,
        ::StateVectorComponent const,
        ::VanillaClientGameplayComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _storePreviousRideStats(
        ::StrictEntityContext const&,
        ::StateVectorComponent const&     stateVectorComponent,
        ::VanillaClientGameplayComponent& vanillaClientGameplayComponent
    );

    MCAPI static void _tickStorePreviousRideStatsSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent, ::LocalPlayerComponent, ::PassengerComponent>,
            ::StateVectorComponent const,
            ::VanillaClientGameplayComponent> view
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
