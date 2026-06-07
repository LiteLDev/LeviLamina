#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class SynchedActorDataWriter;
class Vec3;
struct ActorDataDirtyFlagsComponent;
struct ActorDataSeatOffsetComponent;
struct SeatDescription;
struct VehicleComponent;
// clang-format on

struct SeatDescriptionUtility {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SeatDescription const& getSeatDescriptionOfPassenger(
        ::std::vector<::SeatDescription> const& seats,
        int                                     passengerCount,
        int                                     passengerIndex
    );

    MCNAPI static ::SeatDescription const& getSeatDescriptionOfPassenger(
        ::std::vector<::SeatDescription> const& seats,
        ::VehicleComponent const&               vehicleComponent,
        ::StrictEntityContext const&            passengerContext
    );

    MCNAPI static float getSeatRidingHeightOffset(float seatYPosition, float seatScale, float ridingHeight);

    MCNAPI static void setValuesToSynchedActorData(
        ::ActorDataSeatOffsetComponent& seatOffsetComponent,
        ::ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
        ::SynchedActorDataWriter        synchedActorData,
        ::Vec3 const&                   offset,
        ::SeatDescription const&        seat,
        float                           seatRotation
    );
    // NOLINTEND
};
