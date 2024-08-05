#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

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
    MCAPI static void
    doInWaterSensing(class StrictEntityContext& entity, struct UpdateWaterStateRequestComponent const&, struct FallDistanceComponent&, class Optional<class FlagComponent<struct FallingBlockFlag> const>, class Optional<struct PassengerComponent const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class EntityModifier<class FlagComponent<struct InWaterFlag>, struct WaterSplashEffectRequestComponent> modifier, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BoatFlag>, struct VehicleComponent>>);

    MCAPI static void
    singleTickInWaterSensing(class StrictEntityContext&, class ViewT<class StrictEntityContext, struct UpdateWaterStateRequestComponent const, struct FallDistanceComponent, class Optional<class FlagComponent<struct FallingBlockFlag> const>, class Optional<struct PassengerComponent const>, class Optional<class FlagComponent<struct InWaterFlag> const>>, class EntityModifier<class FlagComponent<struct InWaterFlag>, struct WaterSplashEffectRequestComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BoatFlag>, struct VehicleComponent>>);

    MCAPI static void tickInWaterSensing(class ViewT<class StrictEntityContext, struct UpdateWaterStateRequestComponent const, struct FallDistanceComponent, class Optional<class FlagComponent<struct FallingBlockFlag> const>, class Optional<struct PassengerComponent const>, class Optional<class FlagComponent<struct InWaterFlag> const>> view, class EntityModifier<class FlagComponent<struct InWaterFlag>, struct WaterSplashEffectRequestComponent> modifier, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BoatFlag>, struct VehicleComponent>>);

    // NOLINTEND
};
