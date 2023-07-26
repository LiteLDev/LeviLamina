#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GetRidingHeightUtility {
/**
 * @symbol
 * ?getRidingHeight\@GetRidingHeightUtility\@\@YAMVSynchedActorDataReader\@\@PEBURidingHeightComponent\@\@PEBUAdultRidingHeightOffsetComponent\@\@M\@Z
 */
MCAPI float getRidingHeight(
    class SynchedActorDataReader,
    struct RidingHeightComponent const*,
    struct AdultRidingHeightOffsetComponent const*,
    float
); // NOLINT

}; // namespace GetRidingHeightUtility
