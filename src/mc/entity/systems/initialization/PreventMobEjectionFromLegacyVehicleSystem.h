#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct EntityNeedsInitializeFlagComponent;
struct KeepRidingEvenIfTooLargeForVehicleFlagComponent;
struct PassengerComponent;
struct TickingSystemWithInfo;
// clang-format on

class PreventMobEjectionFromLegacyVehicleSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _preventEjectionIfNeeded(
        ::StrictEntityContext&                                               strictEntityContext,
        ::PassengerComponent const&                                          passengerComponent,
        ::AABBShapeComponent const&                                          aabbShapeComponent,
        ::ViewT<::StrictEntityContext, ::RideableComponent const> const&     vehicleView,
        ::EntityModifier<::KeepRidingEvenIfTooLargeForVehicleFlagComponent>& modifier
    );

    MCAPI static void _tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::EntityNeedsInitializeFlagComponent>,
            ::PassengerComponent const,
            ::AABBShapeComponent const>                                     passengerView,
        ::ViewT<::StrictEntityContext, ::RideableComponent const>           vehicleView,
        ::EntityModifier<::KeepRidingEvenIfTooLargeForVehicleFlagComponent> modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
