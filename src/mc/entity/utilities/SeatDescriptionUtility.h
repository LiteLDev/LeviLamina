#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SeatDescriptionUtility {

public:
    // prevent constructor by default
    SeatDescriptionUtility& operator=(SeatDescriptionUtility const&) = delete;
    SeatDescriptionUtility(SeatDescriptionUtility const&)            = delete;
    SeatDescriptionUtility()                                         = delete;

public:
    /**
     * @symbol
     * ?getSeatDescriptionOfPassenger\@SeatDescriptionUtility\@\@SAAEBUSeatDescription\@\@AEBV?$vector\@USeatDescription\@\@V?$allocator\@USeatDescription\@\@\@std\@\@\@std\@\@HH\@Z
     */
    MCAPI static struct SeatDescription const&
    getSeatDescriptionOfPassenger(std::vector<struct SeatDescription> const&, int, int); // NOLINT
    /**
     * @symbol
     * ?getSeatDescriptionOfPassenger\@SeatDescriptionUtility\@\@SAAEBUSeatDescription\@\@AEBV?$vector\@USeatDescription\@\@V?$allocator\@USeatDescription\@\@\@std\@\@\@std\@\@AEBUVehicleComponent\@\@AEBVStrictEntityContext\@\@\@Z
     */
    MCAPI static struct SeatDescription const&
    getSeatDescriptionOfPassenger(std::vector<struct SeatDescription> const&, struct VehicleComponent const&, class StrictEntityContext const&); // NOLINT
    /**
     * @symbol ?getSeatRidingHeightOffset\@SeatDescriptionUtility\@\@SAMMMM\@Z
     */
    MCAPI static float getSeatRidingHeightOffset(float, float, float); // NOLINT
    /**
     * @symbol
     * ?setValuesToSynchedActorData\@SeatDescriptionUtility\@\@SAXVSynchedActorDataWriter\@\@AEBVVec3\@\@AEBUSeatDescription\@\@M\@Z
     */
    MCAPI static void setValuesToSynchedActorData(
        class SynchedActorDataWriter,
        class Vec3 const&,
        struct SeatDescription const&,
        float
    ); // NOLINT
};
