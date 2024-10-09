#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GetRidingHeightUtility {
// NOLINTBEGIN
MCAPI float getRidingHeight(
    struct ActorDataFlagComponent const&           data,
    struct RidingHeightComponent const*            ridingHeightComponent,
    struct AdultRidingHeightOffsetComponent const* adultRidingHeightOffsetComponent,
    float                                          heightOffset
);
// NOLINTEND

}; // namespace GetRidingHeightUtility
