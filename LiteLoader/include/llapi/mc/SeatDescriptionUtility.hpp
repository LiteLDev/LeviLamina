/**
 * @file  SeatDescriptionUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SeatDescriptionUtility.
 *
 */
class SeatDescriptionUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEATDESCRIPTIONUTILITY
public:
    class SeatDescriptionUtility& operator=(class SeatDescriptionUtility const &) = delete;
    SeatDescriptionUtility(class SeatDescriptionUtility const &) = delete;
    SeatDescriptionUtility() = delete;
#endif

public:
    /**
     * @hash   114389711
     * @symbol  ?getSeatDescriptionOfPassenger\@SeatDescriptionUtility\@\@SAAEBUSeatDescription\@\@AEBV?$vector\@USeatDescription\@\@V?$allocator\@USeatDescription\@\@\@std\@\@\@std\@\@AEBUVehicleComponent\@\@AEBVStrictEntityContext\@\@\@Z
     */
    MCAPI static struct SeatDescription const & getSeatDescriptionOfPassenger(std::vector<struct SeatDescription> const &, struct VehicleComponent const &, class StrictEntityContext const &);
    /**
     * @hash   195289797
     * @symbol  ?getSeatDescriptionOfPassenger\@SeatDescriptionUtility\@\@SAAEBUSeatDescription\@\@AEBV?$vector\@USeatDescription\@\@V?$allocator\@USeatDescription\@\@\@std\@\@\@std\@\@HH\@Z
     */
    MCAPI static struct SeatDescription const & getSeatDescriptionOfPassenger(std::vector<struct SeatDescription> const &, int, int);
    /**
     * @hash   -1570726711
     * @symbol  ?getSeatRidingHeightOffset\@SeatDescriptionUtility\@\@SAMMMM\@Z
     */
    MCAPI static float getSeatRidingHeightOffset(float, float, float);
    /**
     * @hash   -288603677
     * @symbol  ?setValuesToSynchedActorData\@SeatDescriptionUtility\@\@SAXVSynchedActorDataWriter\@\@AEBVVec3\@\@AEBUSeatDescription\@\@M\@Z
     */
    MCAPI static void setValuesToSynchedActorData(class SynchedActorDataWriter, class Vec3 const &, struct SeatDescription const &, float);

};