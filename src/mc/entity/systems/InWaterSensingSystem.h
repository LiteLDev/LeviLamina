#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class InWaterSensingSystem {
public:
    // prevent constructor by default
    InWaterSensingSystem& operator=(InWaterSensingSystem const&);
    InWaterSensingSystem(InWaterSensingSystem const&);
    InWaterSensingSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void doInWaterSensing(
        class StrictEntityContext&                                         entity,
        struct UpdateWaterStateRequestComponent const&                     updateWaterStateRequestComponent,
        struct FallDistanceComponent&                                      fallDistanceComponent,
        class Optional<class FlagComponent<struct FallingBlockFlag> const> fallingBlockFlagComponent,
        class Optional<struct PassengerComponent const>                    passengerComponent,
        class Optional<class FlagComponent<struct InWaterFlag> const>      wasInWaterComponent,
        class EntityModifier<class FlagComponent<struct InWaterFlag>, struct WaterSplashEffectRequestComponent>
            modifier,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct BoatFlag>, struct VehicleComponent>> boatVehicle
    );

    MCAPI static void singleTickInWaterSensing(
        class StrictEntityContext& entity,
        class ViewT<
            class StrictEntityContext,
            struct UpdateWaterStateRequestComponent const,
            struct FallDistanceComponent,
            class Optional<class FlagComponent<struct FallingBlockFlag> const>,
            class Optional<struct PassengerComponent const>,
            class Optional<class FlagComponent<struct InWaterFlag> const>> view,
        class EntityModifier<class FlagComponent<struct InWaterFlag>, struct WaterSplashEffectRequestComponent>
            modifier,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct BoatFlag>, struct VehicleComponent>> boatVehicle
    );

    MCAPI static void tickInWaterSensing(
        class ViewT<
            class StrictEntityContext,
            struct UpdateWaterStateRequestComponent const,
            struct FallDistanceComponent,
            class Optional<class FlagComponent<struct FallingBlockFlag> const>,
            class Optional<struct PassengerComponent const>,
            class Optional<class FlagComponent<struct InWaterFlag> const>> view,
        class EntityModifier<class FlagComponent<struct InWaterFlag>, struct WaterSplashEffectRequestComponent>
            modifier,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct BoatFlag>, struct VehicleComponent>> boatVehicle
    );

    // NOLINTEND
};
