#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GetRidingHeightUtility {
// NOLINTBEGIN
// symbol:
// ?getRidingHeight@GetRidingHeightUtility@@YAMAEBUActorDataFlagComponent@@PEBURidingHeightComponent@@PEBUAdultRidingHeightOffsetComponent@@M@Z
MCAPI float getRidingHeight(
    struct ActorDataFlagComponent const& data,
    struct RidingHeightComponent const*,
    struct AdultRidingHeightOffsetComponent const*,
    float heightOffset
);
// NOLINTEND

}; // namespace GetRidingHeightUtility
