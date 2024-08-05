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
    MCAPI static struct SeatDescription const&
    getSeatDescriptionOfPassenger(std::vector<struct SeatDescription> const&, int, int);

    MCAPI static struct SeatDescription const&
    getSeatDescriptionOfPassenger(std::vector<struct SeatDescription> const&, struct VehicleComponent const&, class StrictEntityContext const&);

    MCAPI static float getSeatRidingHeightOffset(float, float, float);

    MCAPI static void setValuesToSynchedActorData(
        struct ActorDataSeatOffsetComponent&,
        struct ActorDataDirtyFlagsComponent&,
        class SynchedActorDataWriter,
        class Vec3 const&,
        struct SeatDescription const&,
        float
    );

    // NOLINTEND
};
