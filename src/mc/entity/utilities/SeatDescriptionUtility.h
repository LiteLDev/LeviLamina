#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SeatDescriptionUtility {
public:
    // prevent constructor by default
    SeatDescriptionUtility& operator=(SeatDescriptionUtility const&);
    SeatDescriptionUtility(SeatDescriptionUtility const&);
    SeatDescriptionUtility();

public:
    // NOLINTBEGIN
    MCAPI static struct SeatDescription const& getSeatDescriptionOfPassenger(
        std::vector<struct SeatDescription> const& seats,
        int                                        passengerCount,
        int                                        passengerIndex
    );

    MCAPI static struct SeatDescription const& getSeatDescriptionOfPassenger(
        std::vector<struct SeatDescription> const& seats,
        struct VehicleComponent const&             vehicleComponent,
        class StrictEntityContext const&           passengerContext
    );

    MCAPI static float getSeatRidingHeightOffset(float seatYPosition, float seatScale, float ridingHeight);

    MCAPI static void setValuesToSynchedActorData(
        struct ActorDataSeatOffsetComponent& seatOffsetComponent,
        struct ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
        class SynchedActorDataWriter         synchedActorData,
        class Vec3 const&                    offset,
        struct SeatDescription const&        seat,
        float                                seatRotation
    );

    // NOLINTEND
};
