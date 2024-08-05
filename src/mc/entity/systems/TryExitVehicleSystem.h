#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class TryExitVehicleSystem {
public:
    // prevent constructor by default
    TryExitVehicleSystem& operator=(TryExitVehicleSystem const&);
    TryExitVehicleSystem(TryExitVehicleSystem const&);
    TryExitVehicleSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _tickTryExitVehicle(
        class StrictEntityContext const& entity,
        struct PassengerComponent const&,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            struct Exclude<class FlagComponent<struct BoatFlag>>,
            class Optional<class FlagComponent<struct MobFlag> const>,
            struct MovementAttributesComponent const,
            struct VehicleComponent const,
            struct ActorDataFlagComponent const,
            struct ActorDataControllingSeatIndexComponent const>,
        class EntityModifier<
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct ExitFromPassengerFlag>>& modifier
    );

    // NOLINTEND
};
