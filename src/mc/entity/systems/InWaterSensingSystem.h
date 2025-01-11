#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct BoatFlagComponent;
struct FallDistanceComponent;
struct FallingBlockFlagComponent;
struct PassengerComponent;
struct TickingSystemWithInfo;
struct UpdateWaterStateRequestComponent;
struct VehicleComponent;
struct WasInWaterFlagComponent;
struct WaterSplashEffectRequestComponent;
// clang-format on

struct InWaterSensingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void doInWaterSensing(
        ::StrictEntityContext&                        entity,
        ::UpdateWaterStateRequestComponent const&     updateWaterStateRequestComponent,
        ::FallDistanceComponent&                      fallDistanceComponent,
        ::Optional<::FallingBlockFlagComponent const> fallingBlockFlagComponent,
        ::Optional<::PassengerComponent const>        passengerComponent,
        ::Optional<::WasInWaterFlagComponent const>   wasInWaterComponent,
        ::EntityModifier<::WasInWaterFlagComponent, ::WaterSplashEffectRequestComponent>   modifier,
        ::ViewT<::StrictEntityContext, ::Include<::BoatFlagComponent, ::VehicleComponent>> boatVehicle
    );

    MCAPI static void singleTickInWaterSensing(
        ::StrictEntityContext& entity,
        ::ViewT<
            ::StrictEntityContext,
            ::UpdateWaterStateRequestComponent const,
            ::FallDistanceComponent,
            ::Optional<::FallingBlockFlagComponent const>,
            ::Optional<::PassengerComponent const>,
            ::Optional<::WasInWaterFlagComponent const>>                                   view,
        ::EntityModifier<::WasInWaterFlagComponent, ::WaterSplashEffectRequestComponent>   modifier,
        ::ViewT<::StrictEntityContext, ::Include<::BoatFlagComponent, ::VehicleComponent>> boatVehicle
    );
    // NOLINTEND
};
