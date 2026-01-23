#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDataSeatOffsetComponent;
struct AdultRidingHeightOffsetComponent;
struct OffsetsComponent;
struct PassengerComponent;
struct PositionPassengerRequestComponent;
struct RidingHeightComponent;
struct SynchedActorDataComponent;
struct VehicleComponent;
// clang-format on

class VehicleServerSeatPositionSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float _getRidingHeight(
        ::StrictEntityContext const&                                             context,
        ::OffsetsComponent const&                                                offsetsComponent,
        ::ActorDataFlagComponent const&                                          actorDataFlagComponent,
        ::ViewT<::StrictEntityContext, ::RidingHeightComponent const>            ridingHeightView,
        ::ViewT<::StrictEntityContext, ::AdultRidingHeightOffsetComponent const> adultRidingHeightOffsetView
    );

    MCNAPI static void _setSeatDescriptionToActorDataSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::PassengerComponent const,
            ::PositionPassengerRequestComponent const,
            ::OffsetsComponent const,
            ::ActorDataFlagComponent,
            ::ActorDataSeatOffsetComponent,
            ::ActorDataDirtyFlagsComponent,
            ::SynchedActorDataComponent> passengerView,
        ::ViewT<
            ::StrictEntityContext,
            ::VehicleComponent const,
            ::ActorDataBoundingBoxComponent const,
            ::RideableComponent const>                                           vehicleView,
        ::ViewT<::StrictEntityContext, ::RidingHeightComponent const>            ridingHeightView,
        ::ViewT<::StrictEntityContext, ::AdultRidingHeightOffsetComponent const> adultRidingHeightOffsetView
    );

    MCNAPI static void _setSeatDescriptionToActorDataSystemSingleEntity(
        ::StrictEntityContext const& entityContext,
        ::ViewT<
            ::StrictEntityContext,
            ::PassengerComponent const,
            ::PositionPassengerRequestComponent const,
            ::OffsetsComponent const,
            ::ActorDataFlagComponent,
            ::ActorDataSeatOffsetComponent,
            ::ActorDataDirtyFlagsComponent,
            ::SynchedActorDataComponent> passengerView,
        ::ViewT<
            ::StrictEntityContext,
            ::VehicleComponent const,
            ::ActorDataBoundingBoxComponent const,
            ::RideableComponent const>                                           vehicleView,
        ::ViewT<::StrictEntityContext, ::RidingHeightComponent const>            ridingHeightView,
        ::ViewT<::StrictEntityContext, ::AdultRidingHeightOffsetComponent const> adultRidingHeightOffsetView
    );
    // NOLINTEND
};
