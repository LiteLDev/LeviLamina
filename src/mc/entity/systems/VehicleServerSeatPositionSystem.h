#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

class VehicleServerSeatPositionSystem {
public:
    // prevent constructor by default
    VehicleServerSeatPositionSystem& operator=(VehicleServerSeatPositionSystem const&);
    VehicleServerSeatPositionSystem(VehicleServerSeatPositionSystem const&);
    VehicleServerSeatPositionSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static float _getRidingHeight(
        class StrictEntityContext const&                                           context,
        struct OffsetsComponent const&                                             offsetsComponent,
        struct ActorDataFlagComponent const&                                       actorDataFlagComponent,
        class ViewT<class StrictEntityContext, struct RidingHeightComponent const> ridingHeightView,
        class ViewT<class StrictEntityContext, struct AdultRidingHeightOffsetComponent const>
            adultRidingHeightOffsetView
    );

    MCAPI static void _setSeatDescriptionToActorDataSystem(
        class ViewT<
            class StrictEntityContext,
            struct PassengerComponent const,
            struct PositionPassengerRequestComponent const,
            struct OffsetsComponent const,
            struct ActorDataFlagComponent,
            struct ActorDataSeatOffsetComponent,
            struct ActorDataDirtyFlagsComponent,
            struct SynchedActorDataComponent> passengerView,
        class ViewT<
            class StrictEntityContext,
            struct VehicleComponent const,
            struct ActorDataBoundingBoxComponent const,
            class RideableComponent const>                                         vehicleView,
        class ViewT<class StrictEntityContext, struct RidingHeightComponent const> ridingHeightView,
        class ViewT<class StrictEntityContext, struct AdultRidingHeightOffsetComponent const>
            adultRidingHeightOffsetView
    );

    // NOLINTEND
};
